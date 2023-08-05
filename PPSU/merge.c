#include <stdio.h>
int main()
{
    int a, b, add, sub, multi, div;
    printf("Enter a first number:");
    scanf("%d",&a);
    printf("Enter a second number:");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;

    printf("Answer: %d \n",  add);

    printf("Enter a first number:");
    scanf("%d",&a);
    printf("Enter a second number:");
    scanf("%d",&b);

    printf("Answer: %d \n", sub);

    printf("Enter a first number:");
    scanf("%d",&a);
    printf("Enter a second number:");
    scanf("%d",&b);

    printf("Answer: %d \n", multi);

    printf("Enter a first number:");
    scanf("%d",&a);
    printf("Enter a second number:");
    scanf("%d",&b);

    printf("Answer: %d \n", div);




}