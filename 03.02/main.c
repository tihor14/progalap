#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Kerem adjon meg egy szamot: ");
    scanf("%d",&a);

    if(a<0){
        a*=-1;
    }

    printf("A szam abszolut erteke: %d",a);

    return 0;
}
