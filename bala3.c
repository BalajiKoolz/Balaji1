#include<stdio.h>
void main()
{
char z;
int x,y;
printf("Enter the alphabetic letters: ");
scanf("%c",&z);
x=(z=='a'||z=='e'||z=='i'||z=='o'||z=='u');
y=(z=='A'||z=='E'||z=='I'||z=='O'||z=='U');
if(x||y)
printf("%c is vowel.",z);
else
printf("%c is consonant.",z);
}
