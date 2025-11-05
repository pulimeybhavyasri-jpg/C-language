#include<stdio.h>
int main()
{
  int number,sum,remainder;
  printf("enter a 5 digits number:");
  scanf("%d",&number);
  sum=0;
  while (number!=0)	
  {
  	remainder=number%10;
  	sum+=remainder;
  	number=number/10;
  }
  printf("sum of digits is %d",sum);
  return 0;
}
