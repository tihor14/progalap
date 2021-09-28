#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year1=0,year2=0,db=0,i=0;

    printf("Kerem az evszamot: \n");
    scanf("%d,%d",&year1,&year2);

    for(i=year1;i<year2;i++){
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
