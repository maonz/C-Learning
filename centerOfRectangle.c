#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);

int main()
{   
    int x1, x2, y1, y2, pxc, pyc;
    int *x1 = &x1;
    int *x2 = &x2;
    int *y1 = &y1;
    int *y2 = &y2;
    
    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
    center(x1, x2, y1, y2, &pxc, &pyc);

    printf("%p %p\n", &pxc, &pyc);

}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc){

    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) /2;
}
