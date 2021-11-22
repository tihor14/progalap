#include <stdio.h>
#include <stdlib.h>

void beolvas(int *szam);
int negyzet(int szam);

int main()
{
    int szam;
    beolvas(&szam);
    printf("%d",negyzet(szam));
    return 0;
}

int negyzet(int szam){
    return szam*szam;
}

void beolvas(int *szam){
    int ok;
    char ch;
    do{
        ok=1;
        printf("Adj meg egy szamot:\n");
        if(scanf("%d",szam) != 1){
            ok = 0;
            while((ch=getchar())!='\n');
        }
    }while(!ok || *szam<0);
}
