#include <iostream>
#include <cstdlib>   // para sa rand() at srand()
#include <ctime>     // para sa time()
using namespace std;

void numberGuessingGame() {
    srand(time(0)); // seed para random number
    int secretNumber = rand() % 100 + 1; // random number mula 1 hanggang 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Hulaan ang number (1 hanggang 100).\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! Tama ang hula mo!\n";
            cout << "Number of attempts: " << attempts << endl;
        }
    } while (guess != secretNumber);
}

int main() {
    numberGuessingGame();
    return 0;
}
