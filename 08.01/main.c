#include <stdio.h>
#include <stdlib.h>

void beolvasas(double *tomb,int N);
void kiir(double *tomb,int N);

int main()
{
    const int N=5;
    double tomb[N];
    beolvasas(tomb,N);
    kiir(tomb,N);
    return 0;
}
void beolvasas(double *tomb,int N){
    int i,ok;
    char ch;
    double szam;
    for(i=0;i<N;i++){
        ok=1;
        do{
            if(scanf("%lf",&szam)!=1){
                ok=0;
                while((ch=getchar())!='\n');
            }
        }while(!ok && (szam<270 || szam>330));
        tomb[i] = szam;
    }
}
void kiir(double *tomb,int N){
    printf("\n");
    int i;
    for(i=0;i<N;i++){
        printf("%.1f ",tomb[i]);
    }
    printf("\n");
}
