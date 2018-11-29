#include<stdio.h>
int main(){  
   int dig[100],*p,sum=0,n;
    scanf("%d",n);
    printf(":]:-:");
    for(int i=0;i<3;i++){
    scanf("%d",&dig[i]);}
    p=dig;
    while(*p){
        sum+=*p;
        p++;
    }
    printf("%d",sum);
}
