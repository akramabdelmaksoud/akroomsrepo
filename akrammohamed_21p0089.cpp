#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Summation: " << summation(num1, num2) << endl;
    return 0;
}
