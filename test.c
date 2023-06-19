#include<stdio.h>

int main(){
 
int ans_1 = 1+2;
int ans_2 = 6-3;
int ans_3 = 2*2+1;
printf("%d\n",ans_1);
printf("%d\n",ans_2);
printf("%d\n",ans_3);
return 0;

}


/*int main(){
    int a,b ,num;
    scanf("%d",&num);
    for(a = 1; a<= num ;a++){
        for(b = 1; b <= a; b++){
            printf("#");
        }
        printf("\n");
    }
}*/

/*int n, a, b;
scanf("%d", &n);
int i = 0;
int bi_num[10000];
while(n > 0){
    a = n/2;
    b = n%2;
    n = (int) a;
    bi_num[i] = b;
    ++i;
}
for (int j = 0; j <= i; ++j){
    printf("%d",bi_num[j]);
}
return 0;
}*/

/*int n= 4;
for(int y=n-1;y>-n;y--){
    for(int x = -n +1; x<n; x++){
        if(y <=x && y>= -x) printf("*");
        else printf("-");
    }
    printf("\n");
}
return 0 ;*/

/*int x=1;
while (x++<10){
    printf("%d",x--);
    continue;
}*/
}