// Este progama compara la suma armonica realizada de dos formas diferentes
#include <iostream>


typedef float REAL;
REAL sumUp(int N);
REAL sumDown(int N);

using std::cout;

int main(void) {
    cout.precision(6);
    cout.setf(std::ios::scientific);

    cout << sumUp(3) << "\n";
    cout << sumDown(3) << "\n";

    return 0;
}

REAL sumUp(int N) {
    REAL suma = 0;
    for (int ii = 1; ii <= N; ii++)
    {
        suma += 1.0/ii;
    }
    return suma;
}

REAL sumDown(int N) {
    REAL suma = 0;
    for (int ii = N; ii >= 1; ii--)
    {
        suma += 1.0/ii;
    }
    return suma;
}