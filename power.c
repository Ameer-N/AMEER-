#include<stdio.h>
int main()
{
int a,b,i,power=1;
scanf("%d %d",&a,&b);
for(i=0;i<b;i++)
{
power=power*a;
}
printf("%d",power);
}
