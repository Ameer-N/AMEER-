#include<stdio.h>

int main()
{
   long long int no,count=0;
   scanf("%lld",&no);
   while(no)
   {
       count++;
       no/=10;
   }
       printf("%lld",count);
}
