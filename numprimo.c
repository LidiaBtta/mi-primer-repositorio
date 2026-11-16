#include <stdio.h>
int main (void){
int n,j=2;
     scanf("%d",&n);
     
     for(int j=2;j<n/2;j++){
          if(n%j!=0){
       }else{
          break;
       }

     }
     if(j<n/2){
          printf("el numero no es primo");
     }else{
          printf("el numero es primo");
     }

      
        return 0;
}