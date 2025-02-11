#include <iostream>
#include <vector>
#include <limits>

using std::cout;
using std::endl;

int main() {

    {
    // task 1 

    cout << "**************" << endl;

    cout << "1. uzdevums" << endl;

    cout << "**************" << endl;

    // Initialize a 3x3 matrix with fixed values
    int m[3][3] = {
        {1, 7, 3},
        {8, 5, 6},
        {3, -8, 9}
    };

    int temp; // Variable to hold the minimum value of each row

    // Outer loop to go through each row (3 rows)
    for (int i = 0; i < 3; i++) {
        temp = m[i][0]; // Initialize 'temp' with the first element of the current row

        // Inner loop to go through each column in the current row
        for (int j = 0; j < 3; j++) {
            // If a smaller value is found, update 'temp'
            if (temp > m[i][j]) {
                temp = m[i][j];
            }
        }

        // Print the minimum value for the current row
        cout << i + 1 << ". Min value of row is: " << temp << endl;
    }
    }

    {
        // task 2

        cout << "**************" << endl;

        cout << "2. uzdevums" << endl;

        cout << "**************" << endl;

        int a[3][3] = {
            {9,8,7},
            {6,5,4},
            {3,2,1}
        };
        int b[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        int sum[3][3];
        for (int i = 0; i < 3; i++) { // iet cauri rindām
            for (int j = 0; j < 3; j++) { // iet cauri kolonnām
                sum[i][j] = a[i][j] + b[i][j];
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }

        //int M, N;
        //cout << "Enter the number of rows (M): ";
        //cin >> M;
        //cout << "Enter the number of columns (N): ";
        //cin >> N;

        //vector<vector<int>> A(M, vector<int>(N));
        //vector<vector<int>> B(M, vector<int>(N));
        //vector<vector<int>> C(M, vector<int>(N));

        //// Input elements of matrix A
        //cout << "Enter the elements of matrix A:" << endl;
        //for (int i = 0; i < M; ++i) {
        //    for (int j = 0; j < N; ++j) {
        //        cin >> A[i][j];
        //    }
        //}

        //// Input elements of matrix B
        //cout << "Enter the elements of matrix B:" << endl;
        //for (int i = 0; i < M; ++i) {
        //    for (int j = 0; j < N; ++j) {
        //        cin >> B[i][j];
        //    }
        //}

        //// Calculate the sum of matrices A and B, store in matrix C
        //for (int i = 0; i < M; ++i) {
        //    for (int j = 0; j < N; ++j) {
        //        C[i][j] = A[i][j] + B[i][j];
        //    }
        //}

        //// Output matrix C
        //cout << "The sum of matrices A and B is:" << endl;
        //for (int i = 0; i < M; ++i) {
        //    for (int j = 0; N; ++j) {
        //        cout << C[i][j] << " ";
        //    }
        //    cout << endl;
        //}

    // task 3

    cout << "**************" << endl;

    cout << "3. uzdevums" << endl;

    cout << "**************" << endl;

    // Declare a 2D array 'A' with 3 rows and 4 columns, initialized with specific values.
    int A[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

    // Declare a 1D array 'B' of size 4, initialized with specific values.
    int B[4] = { 1, 2, 3, 4 };

    // Declare a 1D array 'C' of size 3, initialized with all values set to 0. 
    // This array will store the result of the matrix-vector multiplication.
    int C[3] = { 0 };

    // Outer loop to iterate over the rows of matrix A (3 rows in total).
    for (int n = 0; n < 3; n++) { // rinda (Latvian: "row")

        // Temporary variable to accumulate the result of the dot product for each row.
        int temp = 0;

        // Inner loop to iterate over the columns of matrix A and the elements of vector B.
        for (int m = 0; m < 4; m++) { // kolonna (Latvian: "column")

            // Multiply the element of row 'n' and column 'm' of A by the corresponding element in B,
            // and accumulate the result in 'temp'.
            temp = temp + A[n][m] * B[m];
        }

        // After finishing the inner loop, store the accumulated result (dot product)
        // for row 'n' in array C at index 'n'.
        C[n] = temp;

        // Output the result for the current row, followed by a tab character for formatting.
        cout << C[n] << "\t ";
    }

    // The program will return 0, signaling successful execution.
    return 0;

}