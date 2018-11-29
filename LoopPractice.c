#include<stdio.h>

int main(){
    int i=0,j=1;
    while(i<5){
        ++i;
        printf(" %2d", i);
        //i++;
      }
    do{
        printf("%2d",j);
        j*=3;;
    }while(j<=243);
    
    for(int k=1;k<=32;k*=2){
         printf("%2d",k);
        }
 return 0;
}