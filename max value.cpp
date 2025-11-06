#include <stdio.h>

int main()
{
    int a[] = {45, 85, 24, 39, 46, 95, 71};
    int i, max;

    max = a[0]; // assume first element is max

    for(i = 1; i < 7; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    printf("Maximum value in the array = %d", max);

    return 0;
}
