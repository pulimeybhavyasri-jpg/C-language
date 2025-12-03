#include<stdio.h>
int fun(int arr[])
{
	for(int i=0;i<5;i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr[]={15,20,66,37,46};
	fun(arr);
}