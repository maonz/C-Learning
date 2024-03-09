#include <stdio.h>

int main()
{
    int h, m;

    int minutes;
    int seconds;
    printf("Enter amount of hours: ");
    scanf("%d", &h);
    printf("Enter amount of minutes: ");
    scanf("%d", &m);

    printf("Total in minutes: %d\n",(h*60)+m);
    printf("Total in seconds: %d\n",((h*60)+m)*60);
    return 0;
}