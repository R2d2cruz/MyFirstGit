#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

long double mysin(double x, int N);
unsigned long long fact(int i);

int main() 
{
    std::cout.setf(std::ios::scientific);
    std::cout.precision(12);

    const double x = M_PI / 3;
    const long double exact = std::sin(x);

    for (int NMAX = 1; NMAX < 1000; NMAX++)
    {
        long double diff = std::fabs(mysin(x, NMAX) - exact) / exact;
        std::cout << NMAX << "\t" << diff << "\n";
    }
    
    return 0;
}

unsigned long long fact(int i){
	if (i <= 1) {
        return 1;
    } else {
        return i * fact(i - 1);
    }
}

long double mysin(double x, int N)
{
    unsigned long long dividend = 0;
    unsigned long long prevBase = 0;
    double quotient = 0;
    int base = 0;
    double outcome = 0;
    for (int n = 1; n < N; n++)
    {
        base = (2 * n) - 1;
        dividend = fact(base);
        quotient = (pow(-1, n-1)) * (pow(x, (double) base));
        prevBase = fact(base - 1);
        if (dividend < prevBase) {
            std::cout << "error, insuficient memory";
            std::abort();
        }
        /* std::cout << "base: " << base << ", fact: " << fact(base) << ", dividend: " << dividend << ", quotient: " << quotient << "\n";*/
        outcome += quotient / dividend;
    }
    /*std::cout << outcome << "\n";*/
    
    return outcome;
}
