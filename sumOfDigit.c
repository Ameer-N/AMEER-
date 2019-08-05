#include<stdio.h>

int main()
{
   long long int no,sum=0;
   scanf("%lld",&no);
   while(no)
   {
      sum=sum+(no%10);
       no/=10;
   }
       printf("%lld",sum);
}
