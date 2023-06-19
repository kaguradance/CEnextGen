#include <stdio.h>
int main(void){

    int a[20],num,i;

    scanf("%d",&num);
    for(i=1;i<=12;i++){
        a[i-1] = num*i;
    }

    for(i=1;i<=12;i++){
        printf("%d * %d = %d\n",num,i,a[i-1]);
    
    }
    return 0;
}