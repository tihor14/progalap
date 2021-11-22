#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("\nAdj meg egy szamot: ");
    scanf("%d", &x);
    printf("\n%d abszolut erteke: %lf", x, fabs((double)x));
    return 0;
}
