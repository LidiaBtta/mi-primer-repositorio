#include <stdio.h>
int main(void){
    int ca,ahorro=0;
    for(int i=0; i<12; i++){
        scanf("%d",&ca);
        ahorro+=ca;
        printf("ahorro: %d\n",ahorro);
    }


return 0;
}