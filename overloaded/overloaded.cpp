#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;      // int version
    cout << add(2.5, 3.1) << endl;  // double version
    return 0;
}
