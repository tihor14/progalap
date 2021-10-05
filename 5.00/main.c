#include <stdio.h>
#include <stdlib.h>

#define meret 10
int main()
{
    int tomb[meret];
    int i;
    for(i=0;i<meret;i++){
        tomb[i] = i;
    }
    for(i=0;i<meret;i++){
        printf("%d.elem: %d\n",i+1,tomb[i]);
    }
    return 0;
}
