#include<stdio.h>
int main()
{
	float a,u,t,d;
	printf("enter acceleration");
	scanf("%f",&a);
	scanf("%f",&u);
	scanf("%f",&t);
	d=u*t+(a*t*t);
	printf("%f",d);
	return 0;
}