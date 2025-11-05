#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==6)
		{
			break;
		}
		printf("%d\n",i);
	}
	printf("outside the for loop");
	return 0;
}
