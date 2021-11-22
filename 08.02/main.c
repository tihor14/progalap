#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void feltolt(float *tomb,int N);
void kiir(float *tomb,int N);
int szamlal(float *tomb,int N,float limit);

int main()
{
    const int N=10;
    float tomb[N];
    feltolt(tomb,N);
    kiir(tomb,N);
    printf("%d darab kisebb %.1f-nel\n",szamlal(tomb,N,300.0),300.0);
    return 0;
}
void feltolt(float *t,int N){
    int i;
    srand(time(0));
    int upper=330*100,lower=270*100;
    float szaz=100;
    for(i=0;i<N;i++){
        t[i] = ((rand()%(upper-lower)+lower)/100.00);
    }
}
void kiir(float *tomb,int N){
    printf("\n");
    int i;
    for(i=0;i<N;i++){
        printf("%.2f ",tomb[i]);
    }
    printf("\n");
}
int szamlal(float *tomb,int N,float limit){
    int db=0;
    for(int i=0;i<N;i++){
        if(tomb[i]<limit)
            db++;
    }
    return db;
}
