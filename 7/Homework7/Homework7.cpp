#include <iostream>
#include <cstring>
#include <algorithm> // For std::sort
using namespace std;

void uzd_4(int matr[10][10])
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            matr[i][j] = 0;
        }
    }
}

int binomialCoefficient(int m, int n) {
    // Base cases
    if (m == 0 || m == n) {
        return 1;
    }
    // Recursive case
    return binomialCoefficient(m, n - 1) + binomialCoefficient(m - 1, n - 1);
}

int Digits(const char* S) {
    // Base case: if the string is empty, return 0
    if (*S == '\0') {
        return 0;
    }
    // Check if the current character is a digit
    int count = isdigit(*S) ? 1 : 0;
    // Recursive call for the rest of the string
    return count + Digits(S + 1);
}

int mainDiagonalSum(int matr[10][10]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += matr[i][i];
    }
    return sum;
}

// Function to sort an array of integers
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

// Function to sort an array of floats
void sortArray(float arr[], int size) {
    std::sort(arr, arr + size);
}

int main()
{

    cout << "4.uzdevums" << endl;
    // 4. uzdevums 

    int matr[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    uzd_4(matr);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << matr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    {

        // 1. uzdevums 
        cout << "1.uzdevums" << endl;
        int m, n;
        cout << "Enter values for m and n (m <= n): ";
        cin >> m >> n;

        if (m > n) {
            std::cout << "Invalid input! Please ensure that m <= n." << endl;
            return 1;
        }

        int result = binomialCoefficient(m, n);
        cout << "C(" << m << ", " << n << ") = " << result << endl;

    }

    // 2. uzdevums 
    cout << "2.uzdevums" << endl;

    const char* S = "ProgrammesanasPamati";
    int digitCount = Digits(S);
    cout << "The number of digits in the string is: " << digitCount << endl;

    // 3. uzdevums
    cout << "3.uzdevums" << endl;
    int diagonalSum = mainDiagonalSum(matr);
    cout << "The sum of the main diagonal is: " << diagonalSum << endl;

	// 5. uzdevums
    // Example usage for int array
    int intArray[] = { 5, 2, 9, 1, 5, 6 };
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Original int array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    sortArray(intArray, intSize);

    cout << "Sorted int array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Example usage for float array
    float floatArray[] = { 3.5, 2.1, 5.9, 1.2, 4.8 };
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

    cout << "Original float array: ";
    for (int i = 0; i < floatSize; i++) {
        cout << floatArray[i] << " ";
    }
    cout << endl;

    sortArray(floatArray, floatSize);

    cout << "Sorted float array: ";
    for (int i = 0; i < floatSize; i++) {
        cout << floatArray[i] << " ";
    }
    cout << endl;

    return 0;
}