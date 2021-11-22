#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("r:\n");
    double r,pi=3.14;
    scanf("%lf",&r);
    printf("K = 2*%lf*%lf=%lf\n",pi,r,2*pi*r);
    printf("T = %lf*%lf ^2=%lf\n",pi,r,r*pi*r);
    return 0;
}
