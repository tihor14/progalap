#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1990;i<2021;i++){
        if(i%4!=0 && i%100 !=0 && i%400 !=0){
            continue;
        }else
        if(i%4 == 0 && i%100 ==0 && i%400 !=0){
            continue;
        }else
        if(i%4 == 0 && i%100 !=0 && i%400 !=0){
            printf("%d volt az elso szokoev\n",i);
            break;
        }else
        if(i%4 == 0 && i%100 ==0 && i%400 ==0){
            printf("%d volt az elso szokoev\n",i);
            break;
        }
    }
    return 0;
}
