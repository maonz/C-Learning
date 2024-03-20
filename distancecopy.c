#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main()
{
   int x1, y1, x2, y2, x3, y3;

   scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3); 
   float s = area(x1, y1, x2, y2, x3, y3); 
   printf("%.3f\n", s);         
   return 0;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
// 1 corner
    float dot1 = pow(x2 - x1, 2);
    float dot11 = pow(y2 - y1, 2);
    float distanceFrom1to2 = sqrt(dot1+dot11);

// 2 corner
    float dot2 = pow(y2 - y3, 2);
    float dot22 = pow(x2 - x3, 2);
    float distanceFrom2to3 = sqrt(dot2+dot22);

// 3 corner
    float dot3 = pow(x3 - x1, 2);
    float dot33 = pow(y3 - y1, 2);
    float distanceFrom3to1 = sqrt(dot3+dot33);

    float p = (distanceFrom1to2 + distanceFrom2to3 + distanceFrom3to1) / 2;
    
    float S = sqrt(p * ((p - distanceFrom1to2)*(p - distanceFrom2to3)*(p - distanceFrom3to1)));
    
    return S;
}