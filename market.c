#include <stdio.h>

int main()
{
    int pr, dis, f, final;
    printf("Enter a Price:");
    scanf("%d",&pr);
    printf("Enter a Discount:");
    scanf("%d",&dis);
    f=(pr*dis)/100;
    final=pr-f;

    printf("Answer: %d", final);

    return 0;
}