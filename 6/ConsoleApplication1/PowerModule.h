// PowerModule.h
#ifndef POWERMODULE_H
#define POWERMODULE_H

// Funkcija, kas aprēķina X pakāpē Y
static double Power(double X, int Y) {
    double result = 1.0;
    for (int i = 0; i < Y; ++i) {
        result *= X;
    }
    return result;
}

#endif // POWERMODULE_H