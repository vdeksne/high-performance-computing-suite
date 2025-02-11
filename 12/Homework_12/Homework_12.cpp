#include <iostream>

using namespace std;


// Function to find the length of each string and return the longest string
void findLongestString(char** array, int rows, char*& longestString, int& maxLength) {
    maxLength = 0;
    for (int i = 0; i < rows; ++i) {
        int length = strlen(array[i]);
        if (length > maxLength) {
            maxLength = length;
            longestString = array[i];
        }
    }
}

int main()
{

    {

		// 1. uzdevums - Dinamiski izveidot divdimensiju masīvu
        int size;

        // Prompt user for the size of the array
        cout << "1. uzdevums" << endl;
        cout << "Enter the size of the array: ";
        cin >> size;

        // Dynamically allocate memory for the array
        int* array = new int[size];

        // Prompt user to enter elements of the array
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> array[i];
        }

        // Display the elements of the array
        cout << "The elements of the array are:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;

        // Deallocate the memory
        delete[] array;
    }

    // 2.uzdevums 

    {
        int rows;

        // Prompt user for the number of rows
        cout << "2. uzdevums" << endl;
        cout << "Enter the number of rows: ";
        cin >> rows;
        cin.ignore(); // To ignore the newline character left in the buffer

        // Dynamically allocate memory for the 2D array
        char** array = new char* [rows];
        for (int i = 0; i < rows; ++i) {
            array[i] = new char[300]; // Assuming max length of each string
        }

        // Prompt user to enter each string
        cout << "Enter " << rows << " lines of text:" << endl;
        for (int i = 0; i < rows; ++i) {
            cin.getline(array[i], 300);
        }

        // Find the longest string
        char* longestString = nullptr;
        int maxLength = 0;
        findLongestString(array, rows, longestString, maxLength);

        // Display the longest string and its length
        cout << "The longest string is: " << longestString << endl;
        cout << "Length of the longest string: " << maxLength << endl;

        // Deallocate the memory
        for (int i = 0; i < rows; ++i) {
            delete[] array[i];
        }
        delete[] array;
    }


    return 0;
}