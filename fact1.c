#include<stdio.h>
//fact
int fact(int no)
{
if(no==0)
  return 1;
else
   return no*fact(no-1);
}
int main()
{
int no,i;
scanf("%d",&no);
if(no>0)
{
i=fact(no);
printf("%d",i);

}
}
