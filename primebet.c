#include<stdio.h>
int main()
{
int a,i,b,j,flag=0;
scanf("%d %d",&a,&b);
for(i=a+1;i<b;i++)
{
    flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
    printf("%d ",i);
}
}

}
