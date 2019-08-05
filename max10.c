#include<stdio.h>
#include<limits.h>
int main()
{
int max=INT_MIN,arr[11],i;
for(i=0;i<10;i++)
{
    scanf("%d ",&arr[i]);
    
    if(arr[i]>=max)
        max=arr[i];
}
printf("%d",max);
}
