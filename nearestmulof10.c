#include<stdio.h>
#include<string.h>
int main()
{
 int no,i,flag=10,rem;
 scanf("%d",&no);
 rem=no%10;
flag=10-rem;
 printf("%d",no+flag);

}

