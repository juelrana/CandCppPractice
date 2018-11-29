#include<stdio.h>
int main(){  
   int k=0;
    char str[100];
    gets(str);
    for(int i=0; str[i]!='\0';i++)
    k++;
    printf("\n%d",k); 
}
