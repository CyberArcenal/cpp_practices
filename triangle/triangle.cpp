#include <iostream>
using namespace std;

// Function para mag-print ng right triangle
void printRightTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function para mag-print ng inverted triangle
void printInvertedTriangle(int height) {
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function para mag-print ng pyramid
void printPyramid(int height) {
    for (int i = 1; i <= height; i++) {
        // spaces
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        // asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    cout << "Right Triangle:\n";
    printRightTriangle(5);

    cout << "\nInverted Triangle:\n";
    printInvertedTriangle(5);

    cout << "\nPyramid:\n";
    printPyramid(5);

    return 0;
}
