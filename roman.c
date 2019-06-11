#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,sum=0,x;
scanf("%s",a);
for(i=0;a[i];i++)
{
if(a[0]=='X' || a[0]=='x')
{
x=10;
}
else if(a[0]!='X' || a[0]!='x')
{
x=8;
}
if(a[i]=='I' || a[i]=='i')
  sum=sum+1;
else if(a[i]=='V' || a[i]=='v')
  sum=sum+5;
else if(a[i]=='x' || a[i]=='X')
  sum=sum+x;
  

}
printf("%d",sum);

}
