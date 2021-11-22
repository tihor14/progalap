#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    double pont[N] = {151,166.25,203,318.5,332.5};
    int also=0,felso=N,kozepso,i,talalt=0;
    double keresett=pont[4]/2;
    while(also<=felso && talalt==0){
        kozepso=(also+felso)/2;
        if(pont[kozepso] == keresett) talalt=1;
        if(pont[kozepso]>keresett) felso = kozepso-1;
        if(pont[kozepso]<keresett) also = kozepso+1;
    }

    printf("%lf\n",pont[kozepso]);

    return 0;
}

