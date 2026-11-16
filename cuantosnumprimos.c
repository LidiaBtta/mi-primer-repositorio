#include<stdio.h>
int main(void){
    int a,b,i,j,primo,cantidad=0;
        scanf("%d",&a);
        scanf("%d",&b);

        for(i=a; i<=b; i++){
            primo=1;
            if(primo<=1){
                primo=0;
            }

            for(j=2;j<i;j++){
                if(i%j==0){
                    primo=0;
                    break;
                }
            }
            if(primo==1){
                printf("%d\n",i);
                cantidad++; 
            }
           
        }
        printf("\ncantidad:%d",cantidad);   
    return 0;
}