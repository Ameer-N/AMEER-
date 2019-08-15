#include<stdio.h>

int main()
{
int n,i;
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

