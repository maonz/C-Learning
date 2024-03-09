#include <stdio.h>

int main(){
    int min;
    float sec;
    
    min = 2*60 + 20;
    sec = (2*60 + 20)*60;

    printf("Время в пути в минутах %d минут\n",min );
    printf("Время в пути в секундах %f секунд\n", sec);

    return 0;
}