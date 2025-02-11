#include <iostream> // Iekļauj iostream galveni ievades un izvades operācijām
#include <cmath> // Iekļauj cmath galveni funkcijai pow()
using namespace std; // Izmanto standarta nosaukumvietu, lai izvairītos no std:: prefiksa lietošanas

// Bloka diagrammas un C++ kods

int main() {
    {
        // uzd 2 Uzrakstīt programmu: Ir dota kvadrāta mala a. Atrast laukumu S=a^2

        float a, S; // Deklarē divus float mainīgos: 'a' kvadrāta malas garumam un 'S' laukuma aprēķinam

        // Aicina lietotāju ievadīt kvadrāta malas garumu
        cout << "Ievadi lūdzu kvadrāta malu a: ";
        cin >> a; // Nolasa lietotāja ievadi mainīgajā 'a'

        // Aprēķina kvadrāta laukumu (S = a^2)
        S = a * a;

        // Izvada aprēķināto laukumu
        cout << "Kvadrāta laukums ir: " << S << endl;
    }

    // uzd 3 Uzrakstīt programmu: Ir dotas taisnstūra malas a un b. Atrast laukumu S=ab un perimetru P=2(a+b)
    {
        float a, b, S, P; // Deklarē četrus float mainīgos: 'a' un 'b' taisnstūra malām, 'S' laukuma aprēķinam un 'P' perimetra aprēķinam

        // Aicina lietotāju ievadīt taisnstūra malas 'a' garumu
        cout << "ievadi lūdzu taisnstūra malu a:";
        cin >> a; // Nolasa lietotāja ievadi mainīgajā 'a'

        // Aicina lietotāju ievadīt taisnstūra malas 'b' garumu
        cout << "ievadi lūdzu taisnstūra malu b:";
        cin >> b; // Nolasa lietotāja ievadi mainīgajā 'b'

        // Aprēķina taisnstūra laukumu (S = a * b)
        S = a * b;

        // Aprēķina taisnstūra perimetru (P = 2 * (a + b))
        P = 2 * (a + b);

        // Izvada aprēķināto laukumu
        cout << endl << "taisnstūra laukums = " << S << endl;

        // Izvada aprēķināto perimetru jaunā rindā
        cout << "taisnstūra perimetrs = " << P << endl;
    }

    // 4. Uzrakstīt programmu: Ir dots riņķa diametrs d. Atrast riņķa garumu L=Pi*d.
// Pieņemt, ka Pi ir vienāds ar 3.1415 

    {
        float d, L; // Deklarē divus float mainīgos: 'd' riņķa diametram un 'L' riņķa garuma aprēķinam
        const float pi = 3.1415; // Definē konstanto pi vērtību

        // Aicina lietotāju ievadīt riņķa diametru
        cout << "Ievadi lūdzu riņķa diametru: ";
        cin >> d; // Nolasa lietotāja ievadi mainīgajā 'd'

        // Aprēķina riņķa garumu (L = pi * d)
        L = pi * d;

        // Izvada aprēķināto riņķa garumu
        cout << "Riņķa garums ir: " << L << endl;
    }

    // 5. Uzrakstīt programmu: Ir doti divi skaitli a un b. Atrast vidējo aritmētisko (a+b)/2
    {
        float a, b, mean; // Deklarē trīs float mainīgos: 'a' un 'b' skaitļiem, 'mean' vidējā aritmētiskā aprēķinam

        // Aicina lietotāju ievadīt pirmo skaitli 'a'
        cout << "Ievadi lūdzu pirmo skaitli a: ";
        cin >> a; // Nolasa lietotāja ievadi mainīgajā 'a'

        // Aicina lietotāju ievadīt otro skaitli 'b'
        cout << "Ievadi lūdzu otro skaitli b: ";
        cin >> b; // Nolasa lietotāja ievadi mainīgajā 'b'

        // Aprēķina vidējo aritmētisko ((a + b) / 2)
        mean = (a + b) / 2;

        // Izvada aprēķināto vidējo aritmētisko
        cout << "Vidējais aritmētiskais ir: " << mean << endl;
    }

    // 6. Uzrakstīt programmu: Atrast funkcijas y = 3x^6 - 6x^2 - 7 vērtību priekš dota x.

    {
        float x, y; // Deklarē divus float mainīgos: 'x' ievadei un 'y' funkcijas vērtības aprēķinam

        // Aicina lietotāju ievadīt skaitli 'x'
        cout << "Ievadi lūdzu skaitli x: ";
        cin >> x; // Nolasa lietotāja ievadi mainīgajā 'x'

        // Aprēķina funkcijas y vērtību (y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7)
        y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

        // Izvada aprēķināto funkcijas y vērtību
        cout << "Funkcijas y vērtība ir: " << y << endl;
    }

    // 7. Uzrakstīt programmu: Atrast funkcijas z = x^3 + 3xy – (x+y)^2 + y^4 vērtību priekš dota x un y. 

    {
        float x, y, z; // Deklarē trīs float mainīgos: 'x' un 'y' ievadei, 'z' funkcijas vērtības aprēķinam

        // Aicina lietotāju ievadīt skaitli 'x'
        cout << "Ievadi lūdzu skaitli x: ";
        cin >> x; // Nolasa lietotāja ievadi mainīgajā 'x'

        // Aicina lietotāju ievadīt skaitli 'y'
        cout << "Ievadi lūdzu skaitli y: ";
        cin >> y; // Nolasa lietotāja ievadi mainīgajā 'y'

        // Aprēķina funkcijas z vērtību (z = pow(x, 3) + 3 * x * y - pow(x + y, 2) + pow(y, 4))
        z = pow(x, 3) + 3 * x * y - pow(x + y, 2) + pow(y, 4);

        // Izvada aprēķināto funkcijas z vērtību
        cout << "Funkcijas z vērtība ir: " << z << endl;
    }

    // 8. Uzrakstīt programmu: Ir dots skaitlis A. Atrast A8, izmantojot trīs (ne vairāk!) operācijas (reizināšana). 

    {
        float A, A2, A4, A8; // Deklarē četrus float mainīgos: 'A' ievadei, 'A2' A kvadrātam, 'A4' A ceturtajai pakāpei un 'A8' A astotajai pakāpei

        // Aicina lietotāju ievadīt skaitli 'A'
        cout << "Ievadi lūdzu skaitli A: ";
        cin >> A; // Nolasa lietotāja ievadi mainīgajā 'A'

        // Aprēķina A^2 (A2 = A * A)
        A2 = A * A;

        // Aprēķina A^4 (A4 = A2 * A2)
        A4 = A2 * A2;

        // Aprēķina A^8 (A8 = A4 * A4)
        A8 = A4 * A4;

        // Izvada aprēķināto A^8 vērtību
        cout << "Skaitļa A^8 vērtība ir: " << A8 << endl;
    }

    // 9. Uzrakstīt programmu, kas saskaita trīs skaitļus

    {
        float num1, num2, num3, sum; // Deklarē četrus float mainīgos: 'num1', 'num2' un 'num3' skaitļu ievadei, 'sum' summas aprēķinam

        // Aicina lietotāju ievadīt pirmo skaitli
        cout << "Ievadi lūdzu pirmo skaitli: ";
        cin >> num1; // Nolasa lietotāja ievadi mainīgajā 'num1'

        // Aicina lietotāju ievadīt otro skaitli
        cout << "Ievadi lūdzu otro skaitli: ";
        cin >> num2; // Nolasa lietotāja ievadi mainīgajā 'num2'

        // Aicina lietotāju ievadīt trešo skaitli
        cout << "Ievadi lūdzu trešo skaitli: ";
        cin >> num3; // Nolasa lietotāja ievadi mainīgajā 'num3'

        // Aprēķina trīs skaitļu summu (sum = num1 + num2 + num3)
        sum = num1 + num2 + num3;

        // Izvada aprēķināto summu
        cout << "Trīs skaitļu summa ir: " << sum << endl;
    }

    // 10. Uzrakstīt programmu, kas pārveido temperatūru no Fārenheita Celsija grādos. 

    {
        float fahrenheit, celsius; // Deklarē divus float mainīgos: 'fahrenheit' ievadei un 'celsius' konvertētajai temperatūrai

        // Aicina lietotāju ievadīt temperatūru Fārenheita grādos
        cout << "Ievadi lūdzu precīzu temperatūru Fārenheita grādos: ";
        cin >> fahrenheit; // Nolasa lietotāja ievadi mainīgajā 'fahrenheit'

        // Konvertē temperatūru no Fārenheita uz Celsija grādiem (celsius = (fahrenheit - 32) * 5.0 / 9.0)
        celsius = (fahrenheit - 32) * 5.0 / 9.0;

        // Izvada konvertēto temperatūru Celsija grādos
        cout << "Temperatūra Celsija grādos ir tieši: " << celsius << endl;
    }

    // 11. Uzrakstīt programmu: Ir dota leņķa vērtība alpha (α) radiānos. Atrast leņķi grādos, α°= 180°/π * α pieņemt, ka 180° = π, un π ir vienāds ar 3.1415 
    {
        float alpha, degrees; // Deklarē divus float mainīgos: 'alpha' leņķa ievadei radiānos un 'degrees' konvertētajam leņķim grādos
        const float pi = 3.1415; // Definē konstanto pi vērtību

        // Aicina lietotāju ievadīt leņķi radiānos
        cout << "Ievadi lūdzu leņķa vērtību radiānos: ";
        cin >> alpha; // Nolasa lietotāja ievadi mainīgajā 'alpha'

        // Konvertē leņķi no radiāniem uz grādiem (degrees = alpha * (180 / pi))
        degrees = alpha * (180 / pi);

        // Izvada konvertēto leņķi grādos
        cout << "Leņķis grādos ir: " << degrees << endl;
    }

    return 0; // Atgriež 0, lai norādītu, ka programma veiksmīgi izpildījās
}