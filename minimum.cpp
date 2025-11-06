#include <stdio.h>

int main()
{
    int n, i, a[10], min;
    
    printf("Enter n value: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    min = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    
    printf("Minimum value = %d\n", min);
    
    return 0;
}
