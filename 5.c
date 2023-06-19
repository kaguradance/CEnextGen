#include<stdio.h>

int n(int a);

int main(){
    int a;
    scanf("%d",&a);
    printf("Result : %d\n",n(a));
    return 0;
}

int n(int a){
    int b;
    if(a==0) return 1;
    b = a*n(a-1);
    return b;
}

//int fac(int n)