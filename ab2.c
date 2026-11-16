#include <stdio.h>
int main (void){
    int a,b;
    int n;
    a=20;
    b=5;
    n=a;
    while(b<a){
       n-=2;
        a-=2;
        printf("%d\n",n);

    }
return 0;
}