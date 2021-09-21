#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam,oszto,db=0;
    printf("Kerek egy szamot: \n");
    scanf("%d",&szam);

    oszto = 1;
    while(oszto <= szam){
        if(szam % oszto ==0){
            db++;
        }
        oszto++;
    }

    printf("Osztok szama: %d", db);


    /*for(int i=1;i<=szam;i++){
        if(szam%i == 0)
            db++;
    }*/
    return 0;
}
