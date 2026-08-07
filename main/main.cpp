#include <iostream>
using namespace std;

// magdagdag ng dalawang numero
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    cout << "Ang sum ay " << result << endl;
    return 0;
}