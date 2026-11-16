
#include<stdio.h>
int main(void){
    int n,c1=0,c2=0,c3=0,a;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        if(a>0)
            c1++;
        else{
            if(a<0)
            c2++;
     else
        c3++;
}}
printf("%d",c1);
printf("%d",c2);
printf("%d",c3);
return 0;
}