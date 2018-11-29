#include<stdio.h>
int main(){  
   char str[100],*p;
    int k=0;
    gets(str);
    p=str;
    while(*p!='\0'){
        k++;
        p++;
    }
    printf("%d",k);
}
