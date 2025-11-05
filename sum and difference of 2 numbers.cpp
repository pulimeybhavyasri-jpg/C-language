#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); 

    c = a + b;
    d = a - b;

    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}

