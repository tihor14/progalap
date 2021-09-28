#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int szam, i=2, db=0;
    printf("Kérek egy számot: ");
    scanf("%d", &szam);

    for (i=2; i<=szam/2; i++){
        if (szam%i==0) db += 1; //db=db+1;
    }

    if(db)      //nem 0
        printf("A megadott szam nem prim.");
    else
        printf("A megadott szam pim.");


    return 0;*/

    int szam, i=2, talalt=0;
    printf("Kerek egy szamot: ");
    scanf("%d", &szam);
    while (i<=szam/2 && !talalt) {
        if (szam%i){
            i++;
            continue;
        }                            //Utasítások sorrendje fontos!
        else talalt=1;
    }
    if (talalt)
        printf("A megadott szam nem prim.");
    else
        printf("A megadott szam prim.");
    return 0;


}
