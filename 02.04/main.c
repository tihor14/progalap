#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adj meg 2 szamot:\n");
    int a,b;
    scanf("%d,%d",&a,&b);
    a += b;
    b = a-b;
    a -=b;
    printf("csere utan:\n");
    printf("a = %d,b = %d\n",a,b);
    return 0;
}
