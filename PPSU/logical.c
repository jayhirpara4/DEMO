#include<stdio.h>

int main ()
    {
        int a,b,c,result;
        printf("Enter the first value : ");
        scanf("%d", &a);
        printf("Enter the second value : ");
        scanf("%d", &b);
        printf("Enter the third value : ");
        scanf("%d", &c);
        result=(a==b) && (c>b);
        printf("(a=b)  && (c>b) is %d \n", result);
        result=(a==b) && (c<b);
        printf("(a=b)  && (c<b) is %d \n", result);
        result=(a==b) || (c<b);
        printf("(a=b)  || (c<b) is %d \n", result);
        result=(a!=b);
        printf("(a!=b) is %d \n", result);
        result=(a==b);
        printf("(a==b) is %d \n", result);

        int x,y,z;
        x=b;
        x+=y;
        printf("\n x=%d & y=%d \n", y, z);
        y=8;
        printf("\n x=%d & z=%d \n", x, y);


        return 0;
    }