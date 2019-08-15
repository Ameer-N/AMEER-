#include<stdio.h>

int main()
{
int n,i,flag=1;
scanf("%d",&n);
int arr[n],no[n];
memset(arr,0,n*sizeof(int));
for(i=0;i<n;i++)
{
    scanf("%d",&no[i]);
    arr[no[i]]++;
    if(arr[no[i]]>1)
    {
        printf("%d",no[i]);
        flag=0;
        break;
    }
}
if(flag==1)
    printf("unique");

}
