#include<stdio.h>
#checking
int main()
{
int ch;
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("Alphabet");
}
else
{
printf("No");
}
}
