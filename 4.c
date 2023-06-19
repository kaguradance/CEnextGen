#include<stdio.h>

void kun();

int main(){
    int x;
    scanf("%d", &x);
    kun(x);
    return 0;
}

void kun(int n){
    //int num;
    //scanf("%d",&num);
    if(n%2 == 0){
        printf("even");
    }
    else{
        printf("odd");
    }
    
}