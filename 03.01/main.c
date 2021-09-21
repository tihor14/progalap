#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Kerek egy egesz szamot: ");
    scanf("%d", &a);
    printf((a%2 == 0) ? "paros\n" : "paratlan\n");

    if(a%2==0){
        printf("Paros\n");
    }else{
        printf("Paratlan\n");
    }

    switch(a%2){
        case 0:printf("Paros");break;
        case 1:printf("Paratlan");break;
        default:printf("Default ag");break;
    }

    return 0;
}
