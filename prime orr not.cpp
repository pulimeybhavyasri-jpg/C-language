#include<stdio.h>
int main()
{
	int number,factor,i;
	factor=0;
	
	printf("enter a number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			factor=factor+1;
		}
	}
	if(factor==2)
	{
		printf(" prime number    ");
	}
	else
	{
		printf(" not a prime number");
	}
	return 0;
}
