#include <iostream>

using namespace std;

void stringCopy(char* dest, const char* src) {
    while (*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int stringLength(const char* str) {
    const char* ptr = str;
    while (*ptr != '\0') {
        ++ptr;
    }
    return ptr - str;
}

double arrayAverage(const int* arr, int size) {
    const int* ptr = arr;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *ptr;
        ++ptr;
    }
    return static_cast<double>(sum) / size;
}

int main() {

    {
        cout << "Uzdevums 1" << endl;
        const char* text = "Hello, world!";
        cout << "The length of the string is: " << stringLength(text) << endl;
    }

    {
        cout << "Uzdevums 2" << endl;
        const char* source = "Teksts kopijai";
        char destination[50]; // Ensure the destination array is large enough
        stringCopy(destination, source);
        cout << "The copied string is: " << destination << endl;
    }
    {
        cout << "Uzdevums 3" << endl;
        int arr[] = { 1, 2, 3, 4, 5 };
        int size = sizeof(arr) / sizeof(arr[0]);
        cout << "The average value of the array elements is: " << arrayAverage(arr, size) << endl;
    }

    return 0;
}