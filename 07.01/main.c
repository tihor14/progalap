#include <stdio.h>
#include <stdlib.h>
int beolvas(void);
int fakt(int szam);

int main()
{

    int szam = beolvas();
    int faktorialis = fakt(szam);
    printf("%d",faktorialis);
    return 0;
}
int beolvas(void){
    int ok,szam=1;
    char ch;
    do{
        ok = 1;
        printf("Irj be egy egesz szamot:\n");
        if(scanf("%d",&szam) != 1){
            printf("Hibas adat!\n");
            while((ch = getchar()) != '\n');
            ok = 0;
        }
    }while(!ok || szam<0);

    return szam;
}


int fakt(int szam){
    int i;
    for(i = szam-1;i>0;i--)
        szam *= i;
    return szam;
}
