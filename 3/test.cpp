#include <iostream>
using namespace std;

// int main() {
//     int i, s;
//     for (i =1, s = 0; i <=10; i++) {
//         if (i % 2 == 0) {
//             continue;
//         }
//         s += i; 
//     }
//     cout << "Sum of odd numbers from 1 to 10 is: " << s << endl;
//     return 0;
// }

// here is an example of continue 

// #include <iostream>
// using namespace std;

// int main() {
//     // Loop from 1 to 10
//     for (int i = 1; i <= 10; ++i) {
//         // If the current number is even, skip the rest of the loop body
//         if (i % 2 == 0) {
//             continue;
//         }
//         // Print the current number (only odd numbers will be printed)
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

int main() { 
double pi1 = 4.0, pi2, p;
p = 3;
do {
    pi2 = pi1 - 4.0 / p;
    // i++
    cout << pi2 << endl;
    p = p + 2;
    pi1 = pi2 + 4.0 / p;
    // i++
    cout << pi1 << endl;
    p = p + 2;
    // cout << pi1 - pi2 << endl;

} while (pi1 - pi2 > 0.00001);
cout << pi1 << endl;

}