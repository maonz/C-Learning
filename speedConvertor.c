#include <stdio.h>

int main() {
    int speed;
    scanf("%d",&speed);
    float speedFl = (float)speed;
    float convertToMetersS = speedFl * 0.27777777778;
    printf("%d\n", (int)convertToMetersS);
    return 0;
}