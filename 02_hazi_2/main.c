#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Irj be egy valos szamot:\n");
    double szam;
    scanf("%lf",&szam);
    printf("Legkozelebb allo alulrol: %lf\n",floor(szam));
    printf("Legkozelebb allo felulrol: %lf\n",ceil(szam));
    return 0;
}
