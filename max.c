#include<stdio.h>
#include<limits.h>
int main()
{
int no,a,i,max=INT_MIN;
scanf("%d",&no);
for(i=0;i<no;i++)
{
scanf("%d",&a);
if(max<a)
{
max=a;
}

}
printf("%d",max);
}
