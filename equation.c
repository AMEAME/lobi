#include <stdio.h>

typedef struct Term
{
    char *variable;
    int coefficient;
    int degree;
} Term;

void differentiate(Term *terms, int n)
{
    int i;
    for (i = n; 0 <= i; i--)
    {
        terms[i].coefficient *= terms[i].degree--;
    }
}

void display(Term *terms, int n)
{
    int i;
    for (i = n; 0 <= i; i--)
    {
        if (terms[i].coefficient != 0)
        {
            if (i != n)
            {
                printf(" + ");
            }
            if (terms[i].degree <= 0)
            {
                printf("%d", terms[i].coefficient);
            }
            else if (terms[i].degree == 1)
            {
                if (terms[i].coefficient == 1)
                {
                    printf("%s", terms[i].variable);
                }
                else
                {
                    printf("%d%s", terms[i].coefficient, terms[i].variable);
                }
            }
            else
            {
                if (terms[i].coefficient == 1)
                {
                    printf("%s^%d",terms[i].variable, terms[i].degree);
                }
                else
                {
                    printf("%d%s^%d", terms[i].coefficient, terms[i].variable, terms[i].degree);
                }
            }
        }
    }
    printf("\n");
}

int main()
{
    // -- nを入力させます。--
    int n;
    printf("n = ");
    scanf("%d", &n);

    // -- aを入力させます。 --
    int a[n + 1];
    int i;
    
    for (i = 0; i < n + 1; i++)
    {
        int index = n - i;
        int coefficient;
        printf("a%d = ", index);
        scanf("%d", &coefficient);
        a[index] = coefficient;
    }
    
    // -- f(x)を表示
    printf("f(x) = ");
    
    for (i = 0; i < n + 1; i++)
    {
        int index = n - i;
        if (a[index] == 0) continue;
        if (i != 0) printf(" + ");
        if (a[index] != 1) printf("%d", a[index]);
        if (index > 0) printf("x");
        if (index < -1 || 1 < index) printf("^%d", index);
    }
    printf("\n");
    
    // -- f(x)を表示
    printf("f'(x) = ");
    
    for (i = 0; i < n + 1; i++)
    {
        int index = n - i;
        if (a[index] * index == 0) continue;
        if (i != 0) printf(" + ");
        if (a[index] * index != 1) printf("%d", a[index] * index);
        if (index > 1) printf("x");
        if (index < 0 || 2 < index) printf("^%d", index - 1);
    }
    printf("\n");
    
    return 0;
}
