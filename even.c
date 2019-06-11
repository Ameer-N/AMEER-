#include<stdio.h>
int main()
{
int no;
scanf("%d",&no);
if(no%2==0)
{
printf("Even");
}
else if(no%2!=0 && no>0)
{
printf("Odd");

}
else
{
printf("invalid");
}
}
