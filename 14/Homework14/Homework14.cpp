#include <iostream>
#include <stdexcept>

using namespace std;

// Šablona funkcija dalīšanai
template <typename T>
T divide(T a, T b) {
    if (b == 0) {
        throw invalid_argument("Dalīšana ar nulli nav atļauta.");
    }
    return a / b;
}

// Šablona funkcija reizināšanai
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main()
{
    // Rādītāji uz šablona funkcijām
    auto divPtr = &divide<double>;
    auto mulPtr = &multiply<double>;

    try {
        // Izsauc dalīšanas funkciju, izmantojot rādītāju
        cout << "10 / 2 = " << divPtr(10, 2) << endl;
        cout << "10.5 / 2.5 = " << divPtr(10.5, 2.5) << endl;
        // Izsauc reizināšanas funkciju, izmantojot rādītāju
        cout << "10 * 2 = " << mulPtr(10, 2) << endl;
        cout << "10.5 * 2.5 = " << mulPtr(10.5, 2.5) << endl;
        // Šis izsaukums izraisīs izņēmumu
        cout << "10 / 0 = " << divPtr(10, 0) << endl;
    }
    catch (const invalid_argument& e) {
        // Apstrādā izņēmumu un izvada kļūdas ziņojumu
        cerr << "Kļūda: " << e.what() << endl;

    }

    return 0;
}