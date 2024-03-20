#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2);

int main() 
{
    int x1, y1, x2, y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    rotateC(&x1, &y1, &x2, &y2);

    printf("%d %d %d %d\n", x1, y1, x2, y2);
    return 0;
}

void rotateC(int *x1, int *y1, int *x2, int *y2)
{
    int tmpC1X = (*x1 + *x2) / 2;
    int tmpC1Y = (*y1 + *y2) / 2; 

    int tmpR1X = *x1 - tmpC1X;
    int tmpR1Y = *y1 - tmpC1Y;
    int tmpR2X = *x2 - tmpC1X;
    int tmpR2Y = *y2 - tmpC1Y;

    int xx1 = tmpR1X + tmpC1Y;
    int yy1 = tmpR1Y + tmpC1X;
    int xx2 = tmpR2X + tmpC1Y;
    int yy2 = tmpR2Y + tmpC1X;

    *x1 = yy2;
    *y1 = xx2;
    *x2 = yy1;
    *y2 = xx1;


}