#include <iostream>
#include <stdexcept>

using namespace std;

// 1. uzdevums 
// test: -1; -5; -10
int factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Sorry but factorial of a negative number does not exist, enter another positive number.");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    try {
        int number;
        cout << "Enter a number to calculate its factorial: ";
        cin >> number;
        int result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}