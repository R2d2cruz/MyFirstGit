// Este progama compara la suma armonica realizada de dos formas diferentes
#include <iostream>


typedef float REAL;
REAL sumUp(int N);
REAL sumDown(int N);


int main(void) {

    return 0;
}

REAL sumUp(int N) {
    REAL suma = 0;
    for (int ii = 1; ii <= N; ii++)
    {
        suma += 1/ii;
    }
    
}

REAL sumDown(int N) {
    REAL suma = 0;
    for (int ii = N; ii >= 1; ii--)
    {
        suma += 1/ii;
    }
    
}