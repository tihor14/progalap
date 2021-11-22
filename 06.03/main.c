#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
     int array[] = {11260, 9850, 9125, 6630, 5890, 5385, 4650, 3030, 2860, 2665};
     int i, size = sizeof(array)/sizeof(int);
     bool found;
     int first, last, middle;
     int search = 4650;

     // lineáris keresés
     found = false;
     for (i=0; i<size && array[i]>=search; i++) {
         if (array[i]==search) {
             printf("A %d. versenyzo pontszama %d\n", i+1, array[i]);
             found = true;
             break;
         }
     }
     if (i==size || !found) printf("Nem talalt\n");
     // bináris keresés
     first = 0;
     last = size - 1;
     middle = (first+last)/2;
     while (first <= last) {
        if (array[middle] < search)
            last = middle - 1;
        else if (array[middle] == search) {
             printf("A %d. versenyzo pontszama %d\n", middle+1, search);
             break;
        } else first = middle + 1;

        middle = (first + last)/2;
     }
     if (first > last) printf("Nem talalt\n");
    return 0;
}
