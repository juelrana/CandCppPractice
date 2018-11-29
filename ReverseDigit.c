#include<stdio.h>
int main(){  
   int n,rev,b;
   scanf("%d",&n);
    int num=n;
   do{
        b=n%10;
        rev=(rev*10)+b;
        n=n/10;
    }while(n);
    if(num==rev){
    printf("pa");}
    else{
    printf("num=%d,rev=%d",num,rev);}
}
