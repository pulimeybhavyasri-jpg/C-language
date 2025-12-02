//with return type and with parameters
#include<stdio.h>
int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 5 , b = 7 , sum = 0;
	sum = add(a , b);
	printf("%d" , sum);
	return 0;
}