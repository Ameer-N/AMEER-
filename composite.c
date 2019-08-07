#include<stdio.h>
#include<malloc.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc((n+1)*sizeof(int));
    memset(arr,0,(n+1)*sizeof(int));
    for(int i=2;i<=n;i++)
        if(arr[i]==0)
         for(int j=2;(i*j)<=n;j++)
             arr[i*j]=1;


    if(arr[n]==1)
        printf("yes");
    else
         printf("no");

    free(arr);
}

