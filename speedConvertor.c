#include <stdio.h>

int main() {
    float speed;
    scanf("%f",&speed);
    float convertToMetersS = speed / 3.6;
    printf("%f\n", convertToMetersS);
    return 0;
}