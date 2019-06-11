#include<stdio.h>
#include<ctype.h>
int main()
{
int a,no,i;
scanf("%d",&no);
for(i=0;i<no;i++)
{
   scanf("%d",&a);
   printf("%d %d\n",a,i);
}
}
