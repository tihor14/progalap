#include <stdio.h>
#include <stdlib.h>

void beolvas(int *szam);
int hatvanyozas(int alap,int kitevo);
int main()
{
    int alap,kitevo;
    printf("Adja meg a hatvany alapot:\n");
    beolvas(&alap);
    printf("Adja meg a hatvany kitevojet:\n");
    beolvas(&kitevo);
    printf("Eredmeny:%d",hatvanyozas(alap,kitevo));
    return 0;
}

int hatvanyozas(int alap,int kitevo){
    int i,eredeny=alap;
    for(i=1;i<kitevo;i++){
        eredeny *= alap;
    }
    return eredeny;
}

void beolvas(int *szam){
    int ok;
    char ch;
    do{
        ok=1;
        if(scanf("%d",szam) != 1){
            ok = 0;
            while((ch=getchar())!='\n');
        }
    }while(!ok || *szam<0);
}
