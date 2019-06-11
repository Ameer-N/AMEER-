#include<stdio.h>
int main()
{
int a[128]={0};
int i,n,arr[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
  a[arr[i]]++;  
}
for(i=0;i<128;i++)
{
if(a[i]>1)
{
printf("%d",i);
}
}
  
  
}
