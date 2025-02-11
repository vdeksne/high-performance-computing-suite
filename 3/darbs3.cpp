#include <iostream>
#include <cmath>
using namespace std;


// 1. uzdevums 

int main() {
    int K, N;

    cout << "Lūdzu, ievadi veselu skaitli K: ";
    cin >> K;
    cout << "Ievadi veselu skaitli N (N > 0): ";
    cin >> N;

    // Tagad pārbaude, vai "N" ir lielāks par nulli 
    if (N <= 0) {
        cout << "N jābūt lielākam par 0." << endl;
        return 1; // kļūdas kods tātad izejam no programmas
    }

    // Izvadām skaitli "K" un to darām "N" reizes 
    for (int i = 0; i < N; ++i) {
        cout << K << " ";
    }
    cout << endl;

    return 0; // Atgriežam 0, lai norādītu, ka programma VEIKSMĪGI izpildīta
}

// 2.uzdevums 

int main() {
    double x; // Deklarē double mainīgo 'x' ievadei
    int n; // Deklarē int mainīgo 'n' ievadei
    double Y = 0.0; // Inicializē double mainīgo 'Y' ar vērtību 0.0

    // Aicina lietotāju ievadīt skaitli 'x' un 'n'
    cout << "Ievadi skaitli x: ";
    cin >> x;
    cout << "Ievadi skaitli n: ";
    cin >> n;

    // Aprēķina sērijas summu
    for (int i = 0; i <= n; ++i) {
        Y += 1 / pow(x, pow(2, i)); // Pievieno terminu pie summas
    }

    // Izvada aprēķināto summu
    cout << "Sērijas summa Y ir: " << Y << endl;

    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}

// tests
// Ievadi skaitli x: 2
// Ievadi skaitli n: 3
// Sērijas summa Y ir: 0.816406
// Ievadi skaitli x: 3
// Ievadi skaitli n: 4
// Sērijas summa Y ir: 0.37037

// 3. uzdevums 

int main() {
    // izdrukājam reizinājuma tabulu no 1 līdz 10
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl; // šī daļa nodrošina, ka pāriet uz jaunu rindu pēc katras rindas izdrukāšanas 
    }

    return 0; // programma veiksmīgi izpildījās un lai to norādītu atgriež nulli
}


// 4. uzdevums

int main() {
    int A, B;

    // Ievadīt veselos skaitļus A un B
    cout << "Ievadiet veselo skaitli A (A < B): ";
    cin >> A;
    cout << "Ievadiet veselo skaitli B (A < B): ";
    cin >> B;

    // Pārbaudīt, vai A tiešām ir mazāks par B
    if (A >= B) {
        cout << "Kļūda: A jābūt mazākam par B." << endl;
        return 1; // Atgriež kļūdas kodu ar viens
    }

    // Izvadīt visus veselus skaitļus starp A un B (ieskaitot) augošā secībā
    for (int i = A; i <= B; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << i << " ";
        }
        cout << endl; // Pāriet uz jaunu rindu pēc katra skaitļa izvadīšanas, to dara N reizes
    }

    return 0; // Programma veiksmīgi izpildījās un atgriež nulli kā tā apliecinājumu
}

// 5. uzdevums

int main() {
    int c;

    // Ievadīt naturālo skaitli c
    cout << "Ievadiet naturālo skaitli c: ";
    cin >> c;

    // Pārbaudīt, vai c ir naturāls skaitlis
    if (c <= 0) {
        cout << "Kļūda: c jābūt naturālam skaitlim (c > 0)." << endl;
        return 1; // Atgriež kļūdas kodu (ar viens vērtību to apzīmējot)
    }

    bool found = false;

    // Meklēt visus naturālo skaitļu pārus (a, b), kuriem a^2 + b^2 = c^2
    for (int a = 1; a < c; ++a) {
        for (int b = a; b < c; ++b) { // Sākam no a, lai dublēšanās nenotiktu
            if (a * a + b * b == c * c) {
                cout << "(" << a << ", " << b << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Nav atrasti pāri (a, b), kuriem a^2 + b^2 = c^2." << endl;
    }

    return 0; // Programma veiksmīgi izpildījās un atgriež nulli kā tā apliecinājumu
}

// tests
// c = 5
// (3, 4)

// 6.uzdevums 

int main() { 
    double pi1 = 4.0, pi2, p;
    p = 3;
    do {
        pi2 = pi1 - 4.0 / p;
        cout << pi2 << endl;
        p = p + 2;
        pi1 = pi2 + 4.0 / p;
        cout << pi1 << endl;
        p = p + 2;
    } while (fabs(pi1 - pi2) > 0.00001); // Use fabs to get the absolute value of the difference
    cout << "Apreķinātā π vērtība ar precizitāti 10^-5: " << pi1 << endl;

    return 0;
}


