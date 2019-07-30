#include<stdio.h>
#include <stdlib.h>

int main()
{
long long int no,rem1,rem2,flag;
scanf("%lld",&no);
if(no>10)
{
rem1=no%10;
no=no/10;
while(no>9)
{
    rem2=no%10;
    if(abs(rem1-rem2)==1)
    {
        flag=0;
        rem1=rem2;
    }
    else
    {
      flag=1;
      printf("no");
      break;
    }
    no=no/10;
}
if(flag==0)
  printf("yes");
}
else if(no==10 || no==1)
{
    printf("yes");
}
}
