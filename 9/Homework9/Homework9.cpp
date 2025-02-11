#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()

{

    {
        // 1. uzdevums 
        cout << "1. uzdevums " << endl;

        string strFilename;
        int N, K;

        // Prasa lietotājam ievadīt datnes nosaukumu
        cout << "Ievadiet datnes nosaukumu: ";
        cin >> strFilename;

        // Prasa lietotājam ievadīt N un K
        cout << "Ievadiet rindu skaitu (N): ";
        cin >> N;
        cout << "Ievadiet simbolu skaitu katrā rindā (K): ";
        cin >> K;

        ofstream file(strFilename);
        if (!file.is_open()) {
            cerr << "Nevar atvērt datni: " << strFilename << endl;
            return 1;
        }

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < K; ++j) {
                file << '*';
            }
            file << endl;
        }

        file.close();

        cout << "Datne " << strFilename << " ir izveidota ar " << N << " rindām, katra no kurām sastāv no " << K << " '*' simboliem." << endl;


    }

    {
        // 2. uzdevums 
        cout << "2. uzdevums " << endl;

        string strFilename;
        int N, M;

        // Prasa lietotājam ievadīt datnes nosaukumu
        cout << "Ievadiet datnes nosaukumu: ";
        cin >> strFilename;

        // Prasa lietotājam ievadīt N un M
        cout << "Ievadiet rindu skaitu (N): ";
        cin >> N;
        cout << "Ievadiet kolonnu skaitu (M): ";
        cin >> M;

        ofstream file(strFilename);
        if (!file.is_open()) {
            cerr << "Nevar atvērt datni: " << strFilename << endl;
            return 1;
        }

        // Ieraksta tekstu "Reizinājuma tabula N x M"
        file << "Reizinājuma tabula " << N << " x " << M << endl;

        // Ieraksta reizinājuma tabulu N x M
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= M; ++j) {
                file << i * j << "\t";
            }
            file << endl;
        }

        file.close();

        cout << "Datne " << strFilename << " ir izveidota ar reizinājuma tabulu " << N << " x " << M << "." << endl;

    }

    {
        // 3. uzdevums 
        cout << "3. uzdevums " << endl;

        string strFilename;

        // Prasa lietotājam ievadīt datnes nosaukumu
        cout << "Ievadiet datnes nosaukumu: ";
        cin >> strFilename;

        ifstream file(strFilename);
        if (!file.is_open()) {
            cerr << "Nevar atvērt datni: " << strFilename << endl;
            return 1;
        }

        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();

    }


    {
        // 4. uzdevums 
        cout << "4. uzdevums " << endl;

        string strFilename;
        char ch;

        // Prasa lietotājam ievadīt datnes nosaukumu
        cout << "Ievadiet datnes nosaukumu: ";
        cin >> strFilename;

        // Prasa lietotājam ievadīt simbolu
        cout << "Ievadiet simbolu: ";
        cin >> ch;

        ifstream file(strFilename);
        if (!file.is_open()) {
            cerr << "Nevar atvērt datni: " << strFilename << endl;
            return 1;
        }

        int count = 0;
        char currentChar;
        while (file.get(currentChar)) {
            if (currentChar == ch) {
                count++;
            }
        }

        file.close();

        cout << "Simbolu '" << ch << "' skaits datnē " << strFilename << " ir: " << count << endl;

        return 0;
    }

}