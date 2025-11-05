#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, remainder, n = 0;
    int result = 0;

    scanf("%d", &num);
    original_num = num;


    while (original_num != 0) {
        original_num /= 10;
        n++;
    }

    original_num = num;

    
    while (original_num != 0) {
        remainder = original_num % 10;
        result += (int)pow(remainder, n);
        original_num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}


