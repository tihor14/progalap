#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    printf("Kerek ket egesz szamot:\n");
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("%d / %d = %d, maradek = %d\n\n",a,b,a/b,a%b);

     printf("Kerek ket valos szamot:\n");
    double c,d;
    scanf("%lf,%lf",&c,&d);
    printf("%lf / %lf = %.f, maradek = %.f",c,d,floor(c/d),fmod(c,d));
    return 0;
}
