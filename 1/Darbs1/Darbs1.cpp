#include <iostream>
#include <cmath> // for pow()
using namespace std;

// Block diagrams and c++ code

// uzd 2 Uzrakstīt programmu: Ir dota kvadrāta mala a. Atrast laukumu S=a^2
// int main() {
//     float a, S; // Declare two float variables: 'a' for the side length and 'S' for the area

//     // Prompt the user to enter the length of the square's side
//     cout << "Ievadi lūdzu kvadrāta malu a: ";
//     cin >> a; // Read the user input into variable 'a'

//     // Calculate the area of the square (S = a^2)
//     S = a * a;

//     // Output the calculated area
//     cout << "Kvadrāta laukums ir: " << S << endl;

//     return 0; // Return 0 to indicate successful execution
// }

// uzd 3 Uzrakstīt programmu: Ir dotas taisnstūra malas a un b. Atrast laukumu S=ab un perimetru P=2(a+b)
// int main() 
// {
//     float a, b, S, P; // Declare four float variables: 'a' and 'b' for the sides, 'S' for the area, and 'P' for the perimeter

//     // Prompt the user to enter the length of side 'a' of the rectangle
//     cout << "ievadi lūdzu kvadrāta malu a:";
//     cin >> a; // Read the user input into variable 'a'

//     // Prompt the user to enter the length of side 'b' of the rectangle
//     cout << "ievadi lūdzu kvadrāta malu b:";
//     cin >> b; // Read the user input into variable 'b'

//     // Calculate the area of the rectangle (S = a * b)
//     S = a * b;

//     // Calculate the perimeter of the rectangle (P = 2 * (a + b))
//     P = 2 * (a + b);

// // Output the calculated area
//     cout << endl << "taisnstūra laukums = " << S << endl;

//     // Output the calculated perimeter on a new line
//     cout << "taisnstūra perimetrs = " << P << endl;

//     return 0; // Return 0 to indicate successful execution
// }


// 4. Uzrakstīt programmu: Ir dots riņķa diametrs d. Atrast riņķa garumu L=Pi*d.
// Pieņemt, ka Pi ir vienāds ar 3.1415 

// int main() {
//     float d, L;
//     const float pi = 3.1415;

//     // Prompt the user to enter the diameter
//     cout << "Ievadi lūdzu riņķa diametru: ";
//     cin >> d;

//     // Calculate the circumference
//     L = pi * d;

//     // Output the circumference
//     cout << "Riņķa garums ir: " << L << endl;

//     return 0;
// }

// 5. Uzrakstīt programmu: Ir doti divi skaitli a un b. Atrast vidējo aritmētisko
// (a+b)/2

// int main() {
//     float a, b, mean; // Declare three float variables: 'a' and 'b' for the numbers, 'mean' for the arithmetic mean

//     // Prompt the user to enter the first number
//     // This will display a message asking the user to input the first number
//     cout << "Ievadi lūdzu pirmo skaitli a: ";
//     // Read the user input and store it in variable 'a'
//     cin >> a;

//     // Prompt the user to enter the second number
//     // This will display a message asking the user to input the second number
//     cout << "Ievadi lūdzu otro skaitli b: ";
//     // Read the user input and store it in variable 'b'
//     cin >> b;

//     // Calculate the arithmetic mean
//     // The arithmetic mean is calculated using the formula (a + b) / 2
//     mean = (a + b) / 2;

//     // Output the arithmetic mean
//     // This will display the calculated arithmetic mean to the user
//     cout << "Vidējais aritmētiskais ir: " << mean << endl;

//     return 0; // Return 0 to indicate successful execution
// }

// 6. Uzrakstīt programmu: Atrast funkcijas y = 3x^6 - 6x^2 - 7 vērtību priekš dota x.

// int main() {
//     float x, y; // Declare two float variables: 'x' for the input and 'y' for the function value

//     // Prompt the user to enter the value of x
//     cout << "Ievadi lūdzu skaitli x: ";
//     cin >> x; // Read the user input into variable 'x'

//     // Calculate the value of y using the formula y = 3x^6 - 6x^2 - 7
//     y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

//     // Output the value of y
//     cout << "Funkcijas y vērtība ir: " << y << endl;

//     return 0; // Return 0 to indicate successful execution
// }

// 7. Uzrakstīt programmu: Atrast funkcijas  z = x^3 + 3xy – (x+y)^2 + y^4 ; vērtību priekš dota x un y. 

// int main() {
//     float x, y, z; // Declare three float variables: 'x' and 'y' for the inputs, 'z' for the function value

//     // Prompt the user to enter the value of x
//     // This will display a message asking the user to input the value of x
//     cout << "Ievadi lūdzu skaitli x: ";
//     // Read the user input and store it in variable 'x'
//     cin >> x;

//     // Prompt the user to enter the value of y
//     // This will display a message asking the user to input the value of y
//     cout << "Ievadi lūdzu skaitli y: ";
//     // Read the user input and store it in variable 'y'
//     cin >> y;

//     // Calculate the value of z using the formula z = x^3 + 3xy - (x + y)^2 + y^4
//     // pow(x, 3) calculates x raised to the power of 3
//     // 3 * x * y calculates 3 times x times y
//     // pow(x + y, 2) calculates (x + y) raised to the power of 2
//     // pow(y, 4) calculates y raised to the power of 4
//     z = pow(x, 3) + 3 * x * y - pow(x + y, 2) + pow(y, 4);

//     // Output the value of z
//     // This will display the calculated value of z to the user
//     cout << "Funkcijas z vērtība ir: " << z << endl;

//     return 0; // Return 0 to indicate successful execution
// }

// 8. Uzrakstīt programmu: Ir dots skaitlis A. Atrast A8, izmantojot trīs (ne vairāk!) operācijas (reizināšana). 

// int main() {
//     float A, A2, A4, A8; // Declare four float variables: 'A' for the input, 'A2' for A squared, 'A4' for A to the power of 4, and 'A8' for A to the power of 8

//     // Prompt the user to enter the value of A
//     // This will display a message asking the user to input the value of A
//     cout << "Ievadi lūdzu skaitli A: ";
//     // Read the user input and store it in variable 'A'
//     cin >> A;

//     // Calculate A^2
//     // A^2 is calculated by multiplying A by itself (A * A)
//     A2 = A * A;

//     // Calculate A^4
//     // A^4 is calculated by multiplying A^2 by itself (A2 * A2)
//     A4 = A2 * A2;

//     // Calculate A^8
//     // A^8 is calculated by multiplying A^4 by itself (A4 * A4)
//     A8 = A4 * A4;

//     // Output the value of A^8
//     // This will display the calculated value of A^8 to the user
//     cout << "Skaitļa A^8 vērtība ir: " << A8 << endl;

//     return 0; // Return 0 to indicate successful execution
// }

// 9. Uzrakstīt programmu, kas saskaita trīs skaitļus

// int main() {
//     float num1, num2, num3, sum;

//     // Prompt the user to enter the first number
//     cout << "Ievadi lūdzu pirmo skaitli: ";
//     cin >> num1;

//     // Prompt the user to enter the second number
//     cout << "Ievadi lūdzu otro skaitli: ";
//     cin >> num2;

//     // Prompt the user to enter the third number
//     cout << "Ievadi lūdzu trešo skaitli: ";
//     cin >> num3;

//     // Calculate the sum of the three numbers
//     sum = num1 + num2 + num3;

//     // Output the sum
//     cout << "Trīs skaitļu summa ir: " << sum << endl;

//     return 0;
// }

// 10. Uzrakstīt programmu, kas pārveido temperatūru no Fārenheita Celsija grādos. 

// int main() {
//     float fahrenheit, celsius; // Declare two float variables: 'fahrenheit' for the input temperature and 'celsius' for the converted temperature

//     // Prompt the user to enter the temperature in Fahrenheit
//     // This message will ask the user to input the temperature in Fahrenheit
//     cout << "Ievadi lūdzu precīzu temperatūru Fārenheita grādos: ";
//     // Read the user input and store it in the variable 'fahrenheit'
//     cin >> fahrenheit;

//     // Convert the temperature from Fahrenheit to Celsius
//     // The formula used is: celsius = (fahrenheit - 32) * 5.0 / 9.0
//     celsius = (fahrenheit - 32) * 5.0 / 9.0;

//     // Output the converted temperature in Celsius
//     // This will display the temperature in Celsius to the user
//     cout << "Temperatūra Celsija grādos ir tieši: " << celsius << endl;

//     return 0; // Return 0 to indicate that the program executed successfully
// }

// 11.Uzrakstīt programmu: Ir dota leņķa vērtība alpha (α) radiānos. Atrast leņķi grādos,α°= 180°/π * α pieņemt, ka 180° = π, un π ir vienāds ar 3.1415 

#include <iostream> // Iekļauj iostream galveni ievades un izvades operācijām

using namespace std; // Izmanto standarta nosaukumvietu, lai izvairītos no std:: prefiksa lietošanas standarta bibliotēkas komponentiem

int main() {
    float alpha, degrees; // Deklarē divus float mainīgos: 'alpha' leņķa ievadei radiānos un 'degrees' konvertētajam leņķim grādos
    const float pi = 3.1415; // Definē konstanto pi vērtību

    // Aicina lietotāju ievadīt leņķi radiānos
    // Šis ziņojums lūgs lietotājam ievadīt leņķi radiānos
    cout << "Ievadi lūdzu leņķa vērtību radiānos: ";
    // Nolasa lietotāja ievadi un saglabā to mainīgajā 'alpha'
    cin >> alpha;

    // Konvertē leņķi no radiāniem uz grādiem
    // Izmantotā formula ir: degrees = alpha * (180 / pi)
    degrees = alpha * (180 / pi);

    // Izvada konvertēto leņķi grādos
    // Tas parādīs leņķi grādos lietotājam
    cout << "Leņķis grādos ir: " << degrees << endl;

    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}