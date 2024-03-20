#include <stdio.h>

int delim_konfety(int a);

int main()
{
    int konfet;
    scanf("%d", &konfet);

    int detey = delim_konfety(konfet);
    printf("сколько детей %d\n", detey);

    return 0;
}

int delim_konfety(int a) {
if (a % 2 == 0) {
    if (a == 1) {
        return 1;
    }    else {
        return 1 + delim_konfety(a / 2);
    }
} else if (a % 2 != 0) {
        return 1 + delim_konfety(((a / 2) - 10));

}
  
}