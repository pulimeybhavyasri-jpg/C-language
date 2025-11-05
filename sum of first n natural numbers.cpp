#include<stdio.h>
int main()
{
	int n=7,i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum +=i;
	}
	printf("sum of first %d numbers is %d",n,sum);
	return 0;
}
