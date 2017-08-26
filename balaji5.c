#include<stdio.h>
int main()
{
char p;
printf("Enter the character: ");
scanf("%c",&p);
if((p>='a'&&p<='z')||(p>='A'&&p<=='Z'))
printf("%c is an alphabet",p);
else
printf("%c is not an alphabet",p);
return 0;
}
