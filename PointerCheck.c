#include<stdio.h>
int main(){  
   int num[2][2],*p;
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    scanf("%d",&num[i][j]);    
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    printf("%2d",num[i][j]);}
        printf("\n");}
   p=(int*)num;
    printf("\n%d",*((int*)num+2)); 
}
