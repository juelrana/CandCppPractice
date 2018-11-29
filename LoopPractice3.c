#include<stdio.h>
float avarage(int *num, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=num[i];
    }
    return sum/size;
    
    
}

int main(){
    int num[100],n;
    float avg=0.0;
    printf("enter array size=");
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        printf("enter value=");
        scanf("\n%3d", &num[k]);
        }
    for(int i=0; i<n;i++){
        printf("%3d",num[i]);
        }
    avg=avarage(num, n);
    printf("\navg=%2.3f",avg);
    
 return 0;
}