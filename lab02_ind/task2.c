#include <stdio.h>
#include <math.h>


int main()
{
    double x, n;
    printf("x="); scanf("%lf", &x);

    if (x>2 && x<=5) {
        n = (5+(1.0/2)) + (x*x*x);
    }    else if (x>5) {
        n = cos(M_PI /2 + M_PI * x);
    }    else {
        n = ((2/(x-3)) + sqrt(abs(x+1)));
    }

    printf("n=%lf\n", n);
    return 0;
    
}