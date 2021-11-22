#include <stdio.h>
#include <stdlib.h>
void csere(int *a,int *b);
int main()
{
    int a=5,b=6;
    csere(&a,&b);
    printf("%d,%d",a,b);
    return 0;
}
void csere(int *a,int *b){
    int seged;
    seged = *a;
    *a=*b;
    *b=seged;

}
