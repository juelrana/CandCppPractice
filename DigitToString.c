#include<stdio.h>
void print(int a){
    switch(a){
        case 0: printf("zero");break;
        case 1: printf("one");break;
        case 2: printf("two");break;
        case 3: printf("three");break;
        case 4: printf("four");break;
        case 5: printf("five");break;
        case 6: printf("six");break;
        case 7: printf("seven");break;
        case 8: printf("eight");break;
        case 9: printf("nine");break;
    }
}
int main(){
    int num, bit[100],i=0;
    scanf("%d",&num);
    while(num>0){
        bit[i]=num%10;
        i++;
        num=num/10;
    }
   for(int j=i-1;j>=0;j--)
   // printf("%d",bit[j]);
    print(bit[j]);
    return 0;
}