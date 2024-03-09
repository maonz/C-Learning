#include <stdio.h>

int main(){
    float m;
    int hsm;

    printf("Enter your weight: ");
    scanf("%f", &m);

    printf("Enter your height(in cm): ");
    scanf("%d", &hsm);
    float h = (float)hsm / 100;
    float imt = m / (h * h);

    printf("%f\n", imt);
    return 0;
}