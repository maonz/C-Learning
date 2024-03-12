#include <stdio.h>

int max(int a, int b);

void main() 
{
    int x, y;
    scanf("%d%d", &x, &y);
    int z = max(x, y);
    printf("Max = %d\n", z);
}

int max(int a, int b)
{
    int m=a;
    if(b>a) 
            m=b;
    return m;
}