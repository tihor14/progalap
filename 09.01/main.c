#include <stdio.h>
#include <stdlib.h>

typedef struct datum{
    int ho,nap,ev;
} Datum;

void kiir(Datum );
Datum regebbi(Datum d1,Datum d2);
void beolvas(Datum *);
Datum vmi();


int main()
{
    printf("Irjon be ket datumot!\n");
    Datum elso,masodik;
    beolvas(&elso);
    beolvas(&masodik);
    kiir(regebbi(elso,masodik));
    kiir(vmi());

    return 0;
}

void kiir(Datum d){
    printf("%d.%d.%d\n",d.ev,d.ho,d.nap);
}
void beolvas(Datum *d){
    scanf("%d %d %d",&d->ev,&d->ho,&d->nap);
}
Datum regebbi(Datum d1,Datum d2){
    if(d1.ev==d2.ev){
        if(d1.ho==d2.ho){
            if(d1.nap >= d2.nap)    return d1;
            else return d2;
        }else if(d1.ho>d2.ho)   return d1;
        else return d2;
    }else if(d1.ev > d2.ev)
        return d1;
    else return d2;
}
Datum vmi(){
    Datum egy;
    egy.ev = 2021;
    egy.ho = 11;
    egy.nap = 22;
    return egy;
}
