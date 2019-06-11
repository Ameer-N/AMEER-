#include<stdio.h>
#include<limits.h>
int main()
{
int no,a,i,min=INT_MAX;
scanf("%d",&no);
for(i=0;i<no;i++)
{
scanf("%d",&a);
if(min>a)
{
min=a;
}

}
printf("%d",min);
}
