#include<stdio.h>
int main()
{
int no1,no2,temp;
scanf("%d %d",&no1,&no2);
temp=no1;
no1=no2;
no2=temp;
printf("%d %d",no1,no2);
}
