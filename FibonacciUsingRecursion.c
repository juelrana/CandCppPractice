#include<stdio.h>
void fibonacci(int n){
   static int a=0, b=1,  c;
  //  printf("%2d%2d",a,b); 
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        printf("%2d",b); 
        fibonacci(n-1);
    }
}
int main(){  
   int n;
    scanf("%d",&n);
    printf("%2d%2d",0,1); 
    fibonacci(n);    
}
