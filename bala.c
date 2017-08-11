#include<stdio.h>
int main()
{
 double n;
 printf("Enter the value:");
 scanf("%lf",&n);
 if(n<=0.0)
 {
 if(n==0.0)
 printf("You entered 0");
 else
 printf("You entered a -ve value");
 }
 else
 printf("You entered a +ve value");
 return 0;
 }
