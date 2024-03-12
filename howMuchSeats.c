#include <stdio.h>

int main(){
    float s;
    float w;
    float ch;

    scanf("%f%f%f", &s,&w,&ch);
    float v = s / w;
    int n = (int)(v / ch);
    printf("%d", n);
    return 0;
}