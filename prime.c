#include<stdio.h>
int main()
{
int a,i,flag=0;
scanf("%d",&a);
for(i=2;i<a/2;i++)
{
if(a%2==0)
  flag=1;
  break;
 
}
if(flag==0)
{
	printf("yes");
}
else
{
	printf("no");
}
}
