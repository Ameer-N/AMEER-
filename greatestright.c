#include<stdio.h>
#include <limits.h>

int main()
{
int max=INT_MIN,arr[10000],no,l=0,m=0,arr2[10000],i;
while(scanf("%d",&no)>0)
{
    arr[l]=no;
    l++;;
}
for(i=l-1;i>=0;i--)
{
    if(arr[i]>max)
    {
        max=arr[i];
        arr2[m]=arr[i];
        m++;

    }
}

for(i=m-1;i>=0;i--)
    printf("%d",arr2[i]);


}
