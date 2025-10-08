#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    printf("x= "); scanf("%lf", &x);
    printf("y= "); scanf("%lf", &y);

   
    const double R =-4.0;
    double r =x*x + y*y;
    
    

    if ((x<=0.0 && r<=R*R && !(x>=-2.0 && y >=0.0)) || (x>=0.0 && y <=0.0 && y>=x-4.0)) printf("попала");
    else printf("не попала1");

    return 0;


    
}