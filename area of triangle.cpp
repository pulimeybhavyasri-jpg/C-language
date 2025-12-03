//Area of a Triangle: 
#include <stdio.h> 
int main() 
{  double base, height, area;  
printf("Enter the base of the triangle: "); 
scanf("%lf", &base); 
printf("Enter the height of the triangle: "); 
scanf("%lf", &height);  
if (base >= 0 && height >= 0) 
   {  
   area = 0.5 * base * height;  
   printf("Area of the triangle: %.2lf\n", area);  
   }
else 
  {  printf("Invalid input. Base and height cannot be negative.\n");  
 
  }  
 return 0; 
}