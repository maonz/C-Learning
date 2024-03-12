#include <stdio.h>

int main(){
    int days;
    int firstDay;

    scanf("%d%d", &days, &firstDay);
    int totalDays = (days-firstDay) / 7;
    printf("%d\n",totalDays+1 );
    return 0;
}