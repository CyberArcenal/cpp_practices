#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int bestScore = 0; // tracker ng best score

void numberGuessingGame(int maxRange, int maxAttempts) {
    srand(time(0));
    int secretNumber = rand() % maxRange + 1;
    int guess, attempts = 0;
    int score = 100;

    cout << "Guess the number (1 to " << maxRange << ")\n";
    cout << "You have " << maxAttempts << " attempts.\n";

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        score -= 10;

        if (guess > secretNumber) {
            cout << "Too high!";
        } else if (guess < secretNumber) {
            cout << "Too low!";
        } else {
            cout << "\nCorrect! You guessed it in " << attempts << " attempts.\n";
            cout << "Your score: " << score << endl;

            if (score > bestScore) {
                bestScore = score;
                cout << "🎉 New High Score: " << bestScore << "!\n";
            } else {
                cout << "Best Score so far: " << bestScore << endl;
            }
            return;
        }

        if (abs(secretNumber - guess) <= 5) {
            cout << " (Warm!)\n";
        } else {
            cout << " (Cold!)\n";
        }
    }
    cout << "\nGame Over! The number was " << secretNumber << ".\n";
    cout << "Your score: 0\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== Number Guessing Game ===\n";
        cout << "1. Easy (1-50, 10 attempts)\n";
        cout << "2. Medium (1-100, 7 attempts)\n";
        cout << "3. Hard (1-500, 5 attempts)\n";
        cout << "4. Exit\n";
        cout << "Choose difficulty: ";
        cin >> choice;

        switch (choice) {
            case 1: numberGuessingGame(50, 10); break;
            case 2: numberGuessingGame(100, 7); break;
            case 3: numberGuessingGame(500, 5); break;
            case 4: cout << "Thanks for playing!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
