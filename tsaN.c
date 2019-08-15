#include<stdio.h>
int main()
{
int l,b,h,form;
scanf("%d %d %d",&l,&b,&h);
form=l*b+b*h+h*l;
printf("%d ",2*form);
printf("%d",l*b*h);
}
