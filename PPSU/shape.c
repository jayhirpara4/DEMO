#include<stdio.h>

int main() {

    // shpere

    float shpere_r;
    float b=3.14;
    float c;
    

    printf("Enter the raduis of shpere :");
    scanf("%f", &shpere_r);
    c = shpere_r*shpere_r*b;
    printf("Shpere Area is that : %f \n \n", c);

    // sequre

    float seq_r;

    printf("Enter the side of sequre : ");
    scanf("%f", &seq_r);
    c = seq_r*seq_r;
    printf("Sequre Area is that : %f \n \n", c);

    // rectangle

    float rec_r_a;
    float rec_r_b;
    int ans;

    printf("Enter the side of rectangle a : ");
    scanf("%f", &rec_r_a);
    printf("Enter the side of rectangle b : ");
    scanf("%f", &rec_r_b);
    ans = rec_r_a*rec_r_b;
    printf("Rectangle Area is that : %d", ans);


}