#include<stdio.h>
int main()
{
int a,count=0;
scanf("%d",&a);
while(a)
{
count++;
a=a/10;
}
printf("%d",count);
}
