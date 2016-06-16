#include <stdio.h>
#include <stdlib.h>

int cmp(int *a, int *b) { return *a - *b; }

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    int i, x[n];
    for (i = 0; i < n; i++)
    {
       printf("x[%d]: ", i);
       scanf("%d", &x[i]);
    }

    qsort(x, n, sizeof(int), (int(*)(const void*, const void*))cmp);

    if (n % 2 == 0)
        printf("median: %0.6f\n", (double)(x[n / 2 - 1] + x[n / 2]) / 2);
    else
        printf("median: %0.6f\n", (double)x[n / 2]);

    return 0;
}
