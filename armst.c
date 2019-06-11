#include<stdio.h>
int main()
{
int rem,no,safe,sum=0;
scanf("%d",&no);
safe=no;
while(no)
{
rem=no%10;
sum=rem*rem*rem+sum;
no/=10;
}
if(sum==safe)
{
printf("yes");
}
else
{
printf("no");
}


}
