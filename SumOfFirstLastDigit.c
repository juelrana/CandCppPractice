#include<stdio.h>

int main(){
    int num, bit[100],i=0,sum;
    scanf("%d",&num);
    while(num>0){
        bit[i]=num%10;
        i++;
        num=num/10;
    }
   sum=bit[0]+bit[i-1];
    printf("%d",sum);
    return 0;
}