// ConsoleApplication1.cpp : Šis fails satur 'main' funkciju. Programmas izpilde sākas un beidzas šeit.


// 1. uzdevums
#include <iostream>
using namespace std;

int main()
{
    float x, y; // Deklarē divus float mainīgos: 'x' ievadei un 'y' rezultāta aprēķinam
    cout << "Enter a number: ";
    cin >> x; // Nolasa lietotāja ievadi mainīgajā 'x'

    if (cin.fail()) { // Pārbauda, vai ievade ir nederīga
        cout << "Invalid input. Please enter a numeric value." << endl;
        return 1; // Iziet no programmas ar kļūdas kodu
    }

    if (x >= 0 && x <= 5) { // Pārbauda, vai 'x' ir intervālā [0, 5]
        y = 8 * x - x * x; // Aprēķina y vērtību
        cout << "Result: " << y << endl; // Izvada rezultātu
    }
    else if (x >= 10 && x <= 200) { // Pārbauda, vai 'x' ir intervālā [10, 200]
        y = x + 6; // Aprēķina y vērtību
        cout << "Result: " << y << endl; // Izvada rezultātu
    }
    else { // Ja 'x' nav nevienā no intervāliem
        cout << "No solution" << endl; // Izvada paziņojumu par risinājuma neesamību
    }

    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}


// 2. uzdevums
#include <iostream>
using namespace std;

int main() {
    float x, y; // Deklarē divus float mainīgos: 'x' ievadei un 'y' rezultāta aprēķinam
    cout << "Enter a number: ";
    cin >> x; // Nolasa lietotāja ievadi mainīgajā 'x'

    if (x <= 0) { // Pārbauda, vai 'x' ir mazāks vai vienāds ar 0
        y = -x; // Aprēķina y vērtību
    }
    else if (x > 0 && x < 2) { // Pārbauda, vai 'x' ir intervālā (0, 2)
        y = x * x; // Aprēķina y vērtību
    }
    else { // Ja 'x' ir lielāks vai vienāds ar 2
        y = 4; // Piešķir y vērtību 4
    }

    cout << "The value of the function is: " << y << endl; // Izvada funkcijas vērtību
    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}


// 3. uzdevums
#include <iostream>
using namespace std;

int main() {
    int year; // Deklarē int mainīgo 'year' gada ievadei
    int days; // Deklarē int mainīgo 'days' dienu skaita aprēķinam

    cout << "Enter a year: ";
    cin >> year; // Nolasa lietotāja ievadi mainīgajā 'year'

    if (year % 4 == 0) { // Pārbauda, vai gads dalās ar 4
        if (year % 100 == 0) { // Pārbauda, vai gads dalās ar 100
            if (year % 400 == 0) { // Pārbauda, vai gads dalās ar 400
                days = 366; // Garais gads
            }
            else {
                days = 365; // Nav garais gads
            }
        }
        else {
            days = 366; // Garais gads
        }
    }
    else {
        days = 365; // Nav garais gads
    }

    cout << "The number of days in the year " << year << " is: " << days << endl; // Izvada dienu skaitu gadā
    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}


// 4. uzdevums
#include <iostream>
using namespace std;

int main() {
    float x, y; // Deklarē divus float mainīgos: 'x' un 'y' koordinātu ievadei
    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y; // Nolasa lietotāja ievadi mainīgajos 'x' un 'y'

    // Pārbauda, vai 'x' ir sarkanajā zonā
    bool xInRed = (x >= -1 && x <= -0.5) || (x >= 0.5 && x <= 1);
    // Pārbauda, vai 'y' ir sarkanajā zonā
    bool yInRed = (y >= -1 && y <= -0.5) || (y >= 0.5 && y <= 1);

    if (xInRed && yInRed) { // Pārbauda, vai 'x' un 'y' ir sarkanajā zonā
        cout << "Point (" << x << ", " << y << ") is in the red area." << endl; // Izvada paziņojumu, ka punkts ir sarkanajā zonā
    } else {
        cout << "Point (" << x << ", " << y << ") is not in the red area." << endl; // Izvada paziņojumu, ka punkts nav sarkanajā zonā
    }

    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}

// 5. uzdevums

#include <iostream>
using namespace std;

int main() {
    int operation; // Deklarē int mainīgo 'operation' operācijas numura ievadei
    float A, B, result; // Deklarē trīs float mainīgos: 'A' un 'B' skaitļu ievadei, 'result' rezultāta aprēķinam

    cout << "Enter operation number (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ";
    cin >> operation; // Nolasa lietotāja ievadi mainīgajā 'operation'
    cout << "Enter two numbers (A and B): ";
    cin >> A >> B; // Nolasa lietotāja ievadi mainīgajos 'A' un 'B'

    switch (operation) { // Pārbauda operācijas numuru
    case 1:
        result = A + B; // Aprēķina summu
        cout << "Result of addition: " << result << endl; // Izvada summu
        break;
    case 2:
        result = A - B; // Aprēķina starpību
        cout << "Result of subtraction: " << result << endl; // Izvada starpību
        break;
    case 3:
        result = A * B; // Aprēķina reizinājumu
        cout << "Result of multiplication: " << result << endl; // Izvada reizinājumu
        break;
    case 4:
        if (B != 0) { // Pārbauda, vai dalītājs nav nulle
            result = A / B; // Aprēķina dalījumu
            cout << "Result of division: " << result << endl; // Izvada dalījumu
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl; // Izvada kļūdas paziņojumu
        }
        break;
    default:
        cout << "Invalid operation number." << endl; // Izvada kļūdas paziņojumu par nederīgu operācijas numuru
        break;
    }

    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}


// 6. uzdevums
#include <iostream>
using namespace std;

int main() {
    float x = 1.0; // Inicializē float mainīgo 'x' ar vērtību 1.0
    float y; // Deklarē float mainīgo 'y' rezultāta aprēķinam

    while (x <= 10.0) { // Cikls, kamēr 'x' ir mazāks vai vienāds ar 10.0
        y = x * x; // Aprēķina y vērtību
        cout << "x = " << x << ", y = " << y << endl; // Izvada 'x' un 'y' vērtības
        x += 0.5; // Palielina 'x' par 0.5
    }

    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}


/* 7. uzdevums */

#include <iostream>
using namespace std;

int main() {
    float A; // Deklarē float mainīgo 'A' ievadei
    int N; // Deklarē int mainīgo 'N' ievadei
    float Sum = 1.0; // Inicializē float mainīgo 'Sum' ar vērtību 1.0
    float term = 1.0; // Inicializē float mainīgo 'term' ar vērtību 1.0

    cout << "Enter the value of A: ";
    cin >> A; // Nolasa lietotāja ievadi mainīgajā 'A'
    cout << "Enter the value of N (N > 0): ";
    cin >> N; // Nolasa lietotāja ievadi mainīgajā 'N'

    if (N <= 0) { // Pārbauda, vai 'N' ir lielāks par 0
        cout << "N must be greater than 0." << endl; // Izvada kļūdas paziņojumu
        return 1; // Iziet no programmas ar kļūdas kodu
    }

    for (int i = 1; i <= N; ++i) { // Cikls no 1 līdz 'N'
        term *= A; // Reizina 'term' ar 'A'
        Sum += term; // Pievieno 'term' pie 'Sum'
    }

    cout << "The sum is: " << Sum << endl; // Izvada summu
    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}