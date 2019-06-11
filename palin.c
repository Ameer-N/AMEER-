#include<stdio.h>
int main()
{
int a,safe,place=1,num=0;
scanf("%d",&a);
safe=a;
while(a)
{
num=num*place+a%10;
a=a/10;
place=10;
}
if(num==safe)
{
printf("yes");
}
else
{
printf("no");
}

}
