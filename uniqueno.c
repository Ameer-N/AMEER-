#include<stdio.h>
#include<limits.h>
int main()
{
int n,max=INT_MIN,i;
scanf("%d",&n);
int arr[n],no[n];
memset(arr,0,n*sizeof(int));
for(i=0;i<n;i++)
{
    scanf("%d",&no[i]);
    arr[no[i]]++;
}

for(i=0;i<n;i++)
{
    if(arr[no[i]]==1)
    {
        printf("%d",no[i]);
    }
}
}
// 11
// 1 2 4 4 2 3 3 8 9 8 9
