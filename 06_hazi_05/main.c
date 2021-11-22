#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,db=0;
    for(i=1;i<=100;i++){
        for(j=i+1;j<=100;j++){
            for(k=j+1;k<=100;k++){
                if((i+j)>k && j-i==10 && k-j==10){
                    db++;
                    if(db==20){
                        printf("%d %d %d\n",i,j,k);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
