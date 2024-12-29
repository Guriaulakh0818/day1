#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; 
    }

    int factorial = 1;
    int i = number;

    while (i > 1) {
        factorial *= i;
        i--;
    }

    cout << "The factorial of " << number << " is " << factorial << endl;
    return 0;
}
