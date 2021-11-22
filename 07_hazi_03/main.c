#include <stdio.h>
#include <stdlib.h>

void beolvas(int *szam);
int szmj_osszege(int szam);
int main()
{
    printf("%d",szmj_osszege(2515));
    return 0;
}
int szmj_osszege(int szam){
    int ossz=0,seged=szam;
    int i=0,j;
    while(seged>1){
        seged/=10;
        i++;
    }
    //printf("%d",i);
    for(j=i-1;j>=0;j--){
        int vmi = szam/pow(10,j);
        ossz += vmi;
        szam -= vmi*pow(10,j);

    }
    return ossz;
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
