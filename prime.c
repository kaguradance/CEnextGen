#include<stdio.h>

int main(){

    int a = 0,num=0,i;
    
    while (num!=-99)
    {
    scanf("%d",&num);
       if(num==-99){
            break;
        }
        
        for(i = 1; i <= num; i++ ){
        if(num%i == 0){
            a++;
        }
       }

    if(a==2){
        printf("prime\n");
    }
    else{
        printf("not prime\n");
    }
    a=0;
    }
    
    return 0;
}

    
