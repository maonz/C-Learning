#include <stdio.h>

void swap(int * px, int * py);

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);      // если ввели 2 3

    swap(&x, &y);

    printf("%d %d\n", x, y);    // то напечатает 3 2

    return 0;
}

void swap(int * px, int * py){
    int tmp = *px;
    
    *px=*py;
    *py=tmp;
}
