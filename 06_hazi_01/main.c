#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char beolvas(char *);
int main()
{
    char tomb[100];
    beolvas(tomb);
    printf("%s\n",tomb);
    int i=1;
    while(tomb[i] != '\0'){
        if(isupper(tomb[i])){
            printf("%c betu,%d\n",tomb[i],i);
        }
        i++;
    }
    i=0;
    while(tomb[i] != '\0'){
        if(isdigit(tomb[i]) || ispunct(tomb[i])){
            printf("%c ,%d\n",tomb[i],i);
        }
        i++;
    }
    return 0;
}

char beolvas(char *tomb){
    char c;
    int i=0;
    while((c = getchar())!= 46){
        if(c==33) break;
        if(c==63) break;
        tomb[i] = c; i++;
    }
    tomb[i] = c;
    tomb[++i] = '\0';
}
