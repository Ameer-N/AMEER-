#include<stdio.h>
int main()
{
long long int arr,num=0,place;
scanf("%lld",&arr);
while(arr)
{
num=num*place+arr%10;
arr/=10;
place=10;
}
  printf("%lld",num);
}
