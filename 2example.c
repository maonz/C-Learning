#include <stdio.h>

int main()
{   
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    int averageX = (a + c) / 2;
    int averageY = (b + d) / 2;
    printf("%d %d\n", averageX, averageY);
    return 0;
}