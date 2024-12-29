#include <iostream>
using namespace std;

int main() {
  long long number;
    cout << "Enter a number: ";
    cin >> number;
    int factorial = 1;
    int i = number;
    while (i > 1) {
        factorial *= i;
        i--;
    }
    cout << "The factorial of " << number << " is " << factorial << endl;
    return 0;
}
