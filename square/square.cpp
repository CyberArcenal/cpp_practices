#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int result = square(6);
    cout << "Square: " << result << endl; // output: Square: 36
    return 0;
}
