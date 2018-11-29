#include<stdio.h>
int main(){  
    int a,b,c,d;
    char *p=0;
    int *q=0;
    float *r=0;
    double *s=0;
    a=(int)(p+1);
    b=(int)(q+1);
    c=(int)(r+1);
    d=(int)(s+1);
    printf("%d\n%d\n%d\n%d", a,b,c,d);
    return 0;
}