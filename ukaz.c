#include <stdio.h>
 
int main()
{
    int n = 10;
    
    printf("%d\n", n);

    int *pn = &n;

    *pn = 20;

    printf("%d\n", n);


}