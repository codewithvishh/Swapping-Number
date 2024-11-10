// Swapping Two Number Without without using third variable
#include<stdio.h>
int main ()
{
    int a=10, b=20;
    printf("Before Swapping the Number a=%d b=%d\n",a,b);
    a=a+b;//a becomes 30
    b=a-b;//b becomes 10
    a=a-b;//a becomes 20
    printf("After Swapping the Number a=%d b=%d", a,b);
    return 0;
}
