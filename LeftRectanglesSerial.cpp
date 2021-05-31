#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double Calcs(long long _n, double _h)
{
    double sum = 0.0, xi = 0.0;

    for (int i = 0; i < _n; i++)
    {
        sum += sin(xi + xi * xi * xi);
        xi += _h;
    }
    sum *= _h; //res

    return sum;
}

int main()
{
    long long n = 400000000;
    double h = 1.0 / n;

    cout << "\nLeft rectangles serial method.\nNumber of iterations: 400000000";

    time_t start, finish;
    double duration;

    start = clock();
    double res1 = Calcs(n, h);
    finish = clock();
    duration = (finish - start) / double(CLOCKS_PER_SEC);
    
    printf("\n Time of execution: %f\n", duration);

    cout << "\nThe result: " << res1;
}
