#include <stdio.h>
#include <stdlib.h>

void beolvas(int *hatar);
int osztok_osszege(int szam);
int baratsagos_szamok_e(int szam1,int szam2);


int main()
{
    int alsohatar,felsohatar,i,j;
    beolvas(&alsohatar);
    beolvas(&felsohatar);
    for(i=alsohatar;i<felsohatar;i++){
        for(j=i;j<felsohatar;j++){
            if(baratsagos_szamok_e(i,j)){
                printf("%d es %d baratsagosak",i,j);
            }
        }
    }
    return 0;
}

void beolvas(int *hatar){
    int ok;
    char ch;
    do{
        ok = 1;
        if(scanf("%d",hatar) != 1){
            ok = 0;
            while((ch = getchar())!='\n');
        }
    }while(!ok);
}

int osztok_osszege(int szam){
    int ossz=0,i;
    for(i = 1;i<szam/2;i++){
        if(szam%i==0){
            ossz+=i;
        }
    }
    return ossz;
}

int baratsagos_szamok_e(int szam1,int szam2){
    if((osztok_osszege(szam1) == szam2 )&& (osztok_osszege(szam2) == szam1) && szam1 != szam2)
        return 1;
    return 0;
}
