#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 10
int prime(int szam);
int main()
{
    int t[10];
    int i;
    srand(time(0));
    for(i=0;i<N;i++){
        t[i] = rand()%(101-10)+10;
        printf("%d ",t[i]);
    }
    printf("\n");
    int prim_ind=-1;
    for(i=0;i<N;i++){
        if(prime(t[i])){
            if(prim_ind == -1){
                prim_ind = i;
            }else if(t[i]<t[prim_ind]){
                prim_ind = i;
            }
        }
    }
    if(prim_ind!=-1)
        printf("A legkisebb prim:%d",t[prim_ind]);

    int negyz_ind=-1;
    for(int i=0;i<N;i++){
        if(negyzetszame(t[i])){
            if(negyz_ind == -1)
                negyz_ind = i;
            else if(t[negyz_ind]<t[i])
                negyz_ind=i;
        }
    }

    if(negyz_ind!=-1)
        printf("A legnagyobb negyzetszam:%d",t[negyz_ind]);
    return 0;
}
int prime(int szam){
    for(int i=2;i<szam/2;i++){
        if(szam%i==0)
            return 0;
    }
    return 1;
};
int negyzetszame(int szam){
    for(int i=4;i<11;i++){
        if(szam==i*i){
            return 1;
        }
    }
    return 0;
}
