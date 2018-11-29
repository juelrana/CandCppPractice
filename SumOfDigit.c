#include<stdio.h>
int main(){  
   int n,sum=0,bit;
    scanf("%d",&n);    
    while(n){
        bit=n%10;
        sum+=bit;
        n=n/10;
    }
    printf("\n%d",sum); 
}
