#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
for(i=2;i<a/2;i++)
{
if(i%2!=0|| i==2)
{
if(a%i==0)
  break;
if(i>a/2)
{
printf("yes");
}
else
{
printf("no");

}
}
}
