#include <stdio.h>

#define GALEON 17 
#define SICKLE 29 

int convert(int a, int b, int c);
int minimalCoin(int a);

int main()
{
    int g1, s1, k1;     // кошелек1
    int g2, s2, k2;     // кошелек2
    int g, s, k;        // кошелек результат


    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    int firstCash = convert(g1, s1 , k1);
    int secondCash = convert(g2 ,s2 ,k2);
    int totalAmountOfKnuts = firstCash + secondCash;

    s = totalAmountOfKnuts / 29; 
    k = totalAmountOfKnuts % 29;
    g = s / 17;
    s = s % 17; 
    printf("%d\t%d\t%d\t\n", g, s, k);


    return 0;
}

