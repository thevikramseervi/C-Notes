#include<stdio.h>

void main(){
    int a=5,b=7,temp;
    printf("Before swapping a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a=%d and b=%d", a, b);
}