#include<stdio.h>
int main()
{
int no,a,i,max=0;
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
