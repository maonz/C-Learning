#include <stdio.h>

int main()
{
    int total;
    int round;
    
    scanf("%d", &round );
    scanf("%d", &total );
    
    int fullRings = total / round;
    int residueLenght = total % round;
    printf("%d %d", fullRings , residueLenght);

    return 0;
}