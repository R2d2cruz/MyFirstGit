#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

double mysin(double x, int N);

int main() 
{
    std::cout.setf(std::ios::scientific);
    std::cout.precision(6);

    const double x = M_PI / 3;
    const double exact = std::sin(x);

    for (int NMAX = 0; NMAX < 1000; NMAX++)
    {
        double diff = std::fabs((mysin(x, NMAX), - exact) / exact);
        std::cout << NMAX << "\t" << diff << "\n";
    }
    
    return 0;
}

double mysin(double x, int N)
{
    return 0;
}
