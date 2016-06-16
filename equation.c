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
    int i, n;
    printf("n = ");
    scanf("%d", &n);

    Term terms[n + 1];
    
    for (i = n; 0 <= i; i--)
    {
        int coefficient;
        printf("a%d = ", i);
        scanf("%d", &coefficient);
        Term term = {"x", coefficient, i};
        terms[i] = term;
    }
    
    printf("f(x) = ");
    display(terms, n);
    
    differentiate(terms, n);
    
    printf("f'(x) = ");
    display(terms, n);
    
    
    return 0;
}
