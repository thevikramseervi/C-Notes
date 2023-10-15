#include<stdio.h>

void main(){
    int a=5,b=10;
    printf("Before swapping a=%d and b=%d", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d and b=%d", a, b);    
}