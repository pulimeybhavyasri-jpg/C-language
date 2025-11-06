#include <stdio.h>

int main()
{
    int a, b, i, product = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= b; i++)
    {
        product = product + a;  // using + instead of *
    }

    printf("Product of %d and %d = %d\n", a, b, product);

    return 0;
}
