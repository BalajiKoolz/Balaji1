#include<stdio.h>
int main()
{
char c;
int x,y;
printf("Enter the alphabet");
scanf("%c",&c);
x=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
y=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(x||y)
printf("%c is vowel",c);
else
printf("%c is consotant",c);
return 0;
}
