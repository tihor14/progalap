#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum=0;
    printf("Kerek egy szamot: ");
    scanf("%d", &n);

    i=1;
    while(i<=n){
        sum +=i;
        i++;
    }

    printf("Osszeg:%d\n",sum);

    /*
    do{
        sum += n;
        n--;
    }while(n>0);*/



    return 0;
}
