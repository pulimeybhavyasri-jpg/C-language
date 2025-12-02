#include<stdio.h>
int digits(int n)
{
	int sum=0,r;
	while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;	
	}
	return sum;
}
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d" ,&n);
	printf("sum of digits = %d" , digits(n));
	return 0;
}