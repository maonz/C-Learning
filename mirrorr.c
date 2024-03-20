#include <stdio.h>

void move(int *px, int *py, int dx, int dy);
int main()
{   
    int x,y,dx,dy; // переменная

    scanf("%d%d%d%d", &x, &y, &dx, &dy);
    
    int *px = &x;
    int *py = &y;// указатель на переменную

    move(px, py ,dx , dy);
    


    printf("%d%d\n", *px, *py);
}

void move(int *px, int *py, int dx, int dy)
{
   *px += dx;
    *py += dy;

}
