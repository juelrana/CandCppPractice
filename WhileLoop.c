#include<stdio.h>

int main(){
    int m=1;
    printf("%d",m);
    while(m<20){
        m=m+m;
        printf("%4d",m);
    }
   /* do{
        count+=2;
        printf("\nCount=%d",count);
       // count--;
    }while(count<10);*/
    //for(count=10;count>7;count-=2)
    //printf("\n%d",count);
    
    return 0;
}