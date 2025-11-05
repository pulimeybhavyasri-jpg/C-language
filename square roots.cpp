#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realpart, imagepart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c); 

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %.2lf\n", root1);
    }
    else {
        realpart = -b / (2 * a);
        imagepart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary.\n");
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi\n", realpart, imagepart, realpart, imagepart);
    }

    return 0;
}

