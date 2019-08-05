#include<stdio.h>
#include<limits.h>
int main()
{
int n,first=0,sec=1,i,fibo;
scanf("%d",&n);
if(n>=1)
{
    printf("1 ");

for(i=1;i<n;i++)
{
    fibo=first+sec;
    printf("%d ",fibo);
    first=sec;
    sec=fibo;

}
}
else
{

    printf("0");
}
}
