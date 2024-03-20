#include <stdio.h>
struct Rect0 a;

struct Rect0 
{
    int x;
    int y;
    int width;
    int height;
} a = {-7, 5, 12, 8};


struct Point {
    int x;
    int y;
}lt = {-7, 5};
 rb = {5, -3};

struct Rect1
{
    struct Point lt;
    struct Point rb;
    
}b = {lt, rb};
