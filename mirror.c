#include <stdio.h>

void test(int *px);
void bebra(int *px);
int main()
{   
    int x = 10; // переменная
    int *px = &x; // указатель на переменную
    test(&x); //значение в переменной
    printf("%d", *px );//значение в переменной
    bebra(&x);
    printf("%d", *px );

}

void test(int *px)
{   
    *px = *px + 1;
}

void bebra(int *px)
{
    *px = *px * 2;
}