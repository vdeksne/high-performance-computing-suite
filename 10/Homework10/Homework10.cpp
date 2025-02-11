#include <iostream>

using namespace std;

// Function to modify the value of c based on the values of a and b
void modifyValues(int* a, int* b, int* c) {
    if (*a >= *b) {
        *c = *a - *b;
    }
    else {
        *c = *b - *a;
    }
}

// Function to calculate the factorial of a number
void calculateFactorial(int number, int* result) {
    *result = 1;
    for (int i = 1; i <= number; ++i) {
        *result *= i;
    }
}


int main() {

    {
        cout << "uzdevums 1" << endl;
        // 1. Uzrakstīt programmu, kurā jānodefinē vismaz trīs mainīgie. Ar rādītāju palīdzību
        // modificēt mainīgo vērtības un izvadīt uz ekrāna mainīgo vērtības, kā arī mainīgo adreses.
        // Define three variables
        int a = 10;
        double b = 20.5;
        char c = 'Z';

        // Define pointers to the variables
        int* pA = &a;
        double* pB = &b;
        char* pC = &c;

        // Modify the values using pointers
        *pA = 15;
        *pB = 25.5;
        *pC = 'A';

        // Print the values and addresses of the variables
        cout << "Value of a: " << a << ", Address of a: " << &a << endl;
        cout << "Value of b: " << b << ", Address of b: " << &b << endl;
        cout << "Value of c: " << c << ", Address of c: " << static_cast<void*>(&c) << endl;
    }

    {
        // Uzrakstīt void tipa funkciju, kas izmanto rādītājus sava parametra mainīšanai:
        // funkcija(a, b, c), kur a, b, c – skaitļi un c = a – b, ja a >= b un c = b – a, ja a < b.
        cout << "uzdevums 2" << endl;
        // Define three variables
        int a = 10;
        int b = 5;
        int c;

        // Call the function to modify the value of c
        modifyValues(&a, &b, &c);

        // Print the values of a, b, and c
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
    }

    {
        cout << "uzdevums 3" << endl;
        // Define the number and the variable to store the factorial result
        // Modificēt faktoriāla aprēķināšanas programmu. Faktoriāla aprēķināšanu noformēt
        // void funkcijas veidā, kurai ir jābūt diviem parametriem : 1) skaitlim, kuram ir
        // jāaprēķina faktoriāls, 2) mainīgajam, kurā funkcija atgriež aprēķināto faktoriālu.
        int number = 5;
        int factorial;

        // Call the function to calculate the factorial
        calculateFactorial(number, &factorial);

        // Print the factorial result
        cout << "Factorial of " << number << " is " << factorial << endl;
    }

    return 0;
}