#include <iostream>
#include <cmath>
#include <vector>
#include "PowerModule.h" // Iekļaut jauno moduli

using namespace std;

// Definē konstanti M_PI, ja tā nav pieejama no cmath bibliotēkas
constexpr double M_PI = 3.14159265358979323846;

// Funkcija, kas konvertē leņķi no radiāniem uz grādiem
// // R - leņķis radiānos (0 < R < 2π)
 // Uzdevums 1
//  Aprakstīt funkciju RadToDeg(R), kas atgriež leņķi grādos 
// (R – leņķis radiānos, 0 < R < 2π, 1800 = π).Par π skaitļa vērtību izmantot konstanti M_PI( no bibliotēkas cmath vai math.h.
// Uzzīmēt blokshēmu un uzrakstīt programmu, kas,
//izmantojot funkciju, atrod 5 leņķu vērtības grādos.

static float RadToDeg(float R) {
    // res = 180.0f * R / M_PI
    float res = 180.0f * R / static_cast<float>(M_PI);
    return res;
}
// Uzdevums 2
// Funkcija, kas aprēķina divkāršo faktoriālu
static int Fact2(int N) {
    int result = 1;
    for (int i = N; i > 0; i -= 2) {
        result *= i;
    }
    return result;
}

// Uzdevums 3
// Funkcija, kas pārbauda, vai skaitlis ir pāra
static bool Even(int K) {
    return K % 2 == 0;
}

int main()
{
    {
        // Uzdevums 1
        cout << "Uzdevums 1" << endl;

        int n = 1;
        float x, res;
        while (n <= 5) {
            cout << "Please, enter a number: "; // Lūgt lietotājam ievadīt skaitli
            cin >> x;
            res = RadToDeg(x);
            cout << "angle in degrees: " << res << endl;
            n = n + 1;
        }

        // Uzdevums 2
        //    Aprakstīt funkciju Fact2(N), kas atgriež divkāršo faktoriālu.
        //    N!!= 1 * 3 * 5… * N, ja N – nepāra skaitlis(N > 0); 
        //    N!!= 2 * 4 * 6… * N, ja N – pāra skaitlis(N > 0).
        //    Uzzīmēt blokshēmu un uzrakstīt programmu, kas, izmantojot funkciju, atrod dotā skaitļa
        //    divkāršo faktoriālu.

        cout << "Uzdevums 2" << endl;
        int num;
        cout << "Please, enter an integer: ";
        cin >> num;
        int fact2Result = Fact2(num);
        cout << "Double factorial: " << fact2Result << endl;

        // Uzdevums 3
        cout << "Uzdevums 3" << endl;
        int countEven = 0;
        for (int i = 0; i < 10; ++i) {
            int k;
            cout << "Please, enter integer " << (i + 1) << ": ";
            cin >> k;
            if (Even(k)) {
                countEven++;
            }
        }
        cout << "Number of even integers: " << countEven << endl;

        // Uzdevums 4
        cout << "Uzdevums 4" << endl;
        double A;
        int B;
        cout << "Please, enter the base number (A): ";
        cin >> A;
        cout << "Please, enter the exponent (B): ";
        cin >> B;
        double powerResult = Power(A, B);
        cout << A << " raised to the power of " << B << " is: " << powerResult << endl;
    }

    return 0;
}