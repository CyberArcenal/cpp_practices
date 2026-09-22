#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <iomanip>

using namespace std;

int getOperationMenu()
{
    int choice;
    while (true)
    {
        cout << "\nSelect Operation:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulo (%)\n";
        cout << "Enter choice [1-5]: ";
        cin >> choice;

        if (!cin.fail() && choice >= 1 && choice <= 5)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return choice;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

double getDoubleInput(const string &prompt)
{
    double value;
    while (true)
    {
        cout << prompt;
        cin >> value;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number.\n";
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

double getResult(double n1, double n2, int choice)
{
    switch (choice)
    {
    case 1:
        return n1 + n2;
    case 2:
        return n1 - n2;
    case 3:
        return n1 * n2;
    case 4:
        if (n2 != 0)
            return n1 / n2;
        cout << "Error: Division by zero.\n";
        return numeric_limits<double>::quiet_NaN();
    case 5:
        if (n2 != 0)
            return fmod(n1, n2);
        cout << "Error: Division by zero.\n";
        return numeric_limits<double>::quiet_NaN();
    default:
        return numeric_limits<double>::quiet_NaN();
    }
}

void displayResult(double n1, double n2, int choice, double result)
{
    string op;
    switch (choice)
    {
    case 1:
        op = "+";
        break;
    case 2:
        op = "-";
        break;
    case 3:
        op = "*";
        break;
    case 4:
        op = "/";
        break;
    case 5:
        op = "%";
        break;
    }

    cout << fixed << setprecision(2);
    cout << "----------------------------------------\n";
    cout << "Result: " << n1 << " " << op << " " << n2 << " = " << result << endl;
    cout << "----------------------------------------\n";
}

int main()
{
    char choice;
    do
    {
        double n1 = getDoubleInput("Enter First Number: ");
        double n2 = getDoubleInput("Enter Second Number: ");
        int opChoice = getOperationMenu();
        double result = getResult(n1, n2, opChoice);
        displayResult(n1, n2, opChoice, result);

        cout << "Do you want another calculation? (y/n): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!\n";
    return EXIT_SUCCESS;
}
