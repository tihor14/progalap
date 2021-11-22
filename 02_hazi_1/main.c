#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adja meg a teglatest oldalait:\n");
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    printf("Teglatest felszine:A = 2*(a*b+a*c+b*c) = 2*(%d*%d+%d*%d+%d*%d) = %d\n",a,b,a,c,b,c,2*(a*b+a*c+b*c));
    printf("Teglatest terfogata:V = a*b*c = %d*%d*%d = %d",a,b,c,a*b*c);
    return 0;
}
