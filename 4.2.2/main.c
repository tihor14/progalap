#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lower=0,upper=0,i=0,db=0;
    int ok;
    char ch;

    do{
        ok = 1;
        printf("Add meg az intervallum also hatarat:");
        if((scanf("%d",&lower) != 1) || (lower < 1000)){
            printf("Hibas adat!\n");
            ok=0;

            while((ch=getchar()) != '\n');      //input buffer kiuritese
        }
    }while(!ok);


     do{
        ok = 1;
        printf("Add meg az intervallum felso hatarat:");
        if((scanf("%d",&upper) != 1) || (upper > 2021) || (lower > upper)){
            printf("Hibas adat!\n");
            ok=0;

            while((ch=getchar()) != '\n');      //input buffer kiuritese
        }
    }while(!ok);


    for(i=lower;i<=upper;i++){
        if( ((i % 4 == 0) && (i % 100 !=0)) || (i % 400==0)){
            db++;
        }
    }
    printf("Az adott idõintervallumon %d darab szokoev volt",db);
   /* if (  ((evszam % 4 == 0) && (evszam % 100 !=0)) || (evszam % 400==0) )
        printf("Szokoev \n");
    else
        printf("Nem szokoev \n");
*/

    return 0;
}
