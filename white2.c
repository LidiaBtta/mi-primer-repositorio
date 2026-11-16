#include <stdio.h>
int main (void){
    int i,j;
    i=0;
    j=0;
    while(i<5){
       while(j<5){
            printf("*");
            j+=1;
       }
       printf("\n");
       i+=1;
    }
    return 0;
}