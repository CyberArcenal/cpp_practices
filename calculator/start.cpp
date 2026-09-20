#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string getOperation()
{
    vector<string> operations = {"+", "-", "*", "/", "%"};
    while (true)
    {
        string op;
        cout << "Select Operation [/, +, *, -, %]: ";
        cin >> op;
        for (const auto &operation : operations)
        {
            if (operation == op)
            {
                return op;
            }
        }
        cout << "Invalid operation. Please try again." << endl;
    }
};

double onAdd(double n1, double n2)
{
    return n1 + n2;
}

double onMinus(double n1, double n2)
{
    return n1 - n2;
}

double onMultiply(double n1, double n2)
{
    return n1 * n2;
}

double onDivide(double n1, double n2)
{
    if (n2 != 0)
    {
        return n1 / n2;
    }
    else
    {
        cout << "Error: Division by zero." << endl;
        return 0; // or handle error appropriately
    }
}

double onModulo(double n1, double n2)
{
    if (n2 != 0)
    {
        return fmod(n1, n2);
    }
    else
    {
        cout << "Error: Division by zero." << endl;
        return 0; // or handle error appropriately
    }
}

double getResult(float n1, float n2, const string &op)
{
    if (op == "+")
    {
        return onAdd(n1, n2);
    }
    else if (op == "-")
    {
        return onMinus(n1, n2);
    }
    else if (op == "*")
    {
        return onMultiply(n1, n2);
    }
    else if (op == "/")
    {
        if (n2 != 0)
        {
            return onDivide(n1, n2);
        }
        else
        {
            cout << "Error: Division by zero." << endl;
            return 0; // or handle error appropriately
        }
    }
    else if (op == "%")
    {
        return onModulo(n1, n2);
    }
    return 0; // default case, should not reach here
}

void displayResult(double n1, double n2, const string &op, double result)
{
    cout << "----------------------------------------" << endl;
    cout << "Result: " << n1 << " " << op << " " << n2 << " = " << result << endl;
    cout << "----------------------------------------" << endl;
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
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard any extra input
            return value;
        }
    }
}

int main()
{
    double n1, n2, result;
    string op;
    
    n1 = getDoubleInput("Enter First Number: ");
    n2 = getDoubleInput("Enter Second Number: ");
    op = getOperation();
    result = getResult(n1, n2, op);
    displayResult(n1, n2, op, result);

    return EXIT_SUCCESS;
}