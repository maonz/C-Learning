#include <stdio.h>

int nod(int a, int b);

int main() 
{
    int a, b;
    scanf("%d%d", &a, &b);
    int result = nod(a, b);
    printf("%d", result);

}
int nod(int a, int b){
    if (b == 0) {
        return a;
} else {
    
    return 1 + nod(b, a % b);
}
}
