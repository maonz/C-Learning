#include <stdio.h>

int convert(int, int, int );
int minimalCoin(int a);
int main()
{
    int g1, s1, k1;     // кошелек1
    int g2, s2, k2;     // кошелек2

    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    int firstCash = convert(g1, s1 , k1);
    int secondCash = convert(g2 ,s2 ,k2);

    int totalAmountOfKnuts = firstCash + secondCash;

    printf("%d\t%d\t%d\t%d", minimalCoin(g, s ,k));

    return 0;
}

int convert(int a, int b, int c)
{
    int gal = a * 493;
    int sik = b * 29;

    int totalAmount = gal + sik + c;

    return totalAmount;
}

int minimalCoin(int a)
{
    int s = a / 29; //sikles to galeon
    int k = a % 29; // remainder
    int g = k / 17;
    int k = s % 17;
    return g, s, k;
}