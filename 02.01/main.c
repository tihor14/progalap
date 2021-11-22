#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Irjon be 2 szamot!\n");
    scanf("%d,%d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %.2f\n",a,b,(double)a/b);
    return 0;
}
