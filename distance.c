#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int distance(int a, int b, int c, int p, int q)
{
    if (!(a || b)) return -1;
    return abs(a * p + b * q + c) / sqrt(a * a + b * b);
}

int main()
{
    int a, b, c, p, q, d;
    
    printf("a: ");
    scanf("%d", &a);
    
    printf("b: ");
    scanf("%d", &b);
    
    printf("c: ");
    scanf("%d", &c);
    
    printf("p: ");
    scanf("%d", &p);
    
    printf("q: ");
    scanf("%d", &q);
    
    d = distance(a, b, c, p, q);
    
    printf(d > 0 ? "d: %d\n" : "error\n", d);
    return 0;
}
