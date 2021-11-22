#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int main()
{
    double atlag[]={4.6,3.9,4.2,2.9,3.7,4.9};
    int van=FALSE,i;
    for(i=0;i<sizeof(atlag)/sizeof(double);i++){
        if(atlag[i]>=4.5){
            van=TRUE;
            break;
        }
    }
    if(van){
        printf("Volt ilyen felev(ek):\n");
        for(i=0;i<sizeof(atlag)/sizeof(double);i++){
            if(atlag[i]>=4.5){
                printf("%d.felev,atlag:%.2f\n",i+1,atlag[i]);
            }
        }
    }

    else printf("Nem volt ilyen felev\n");

    return 0;
}
