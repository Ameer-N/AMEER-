#include<stdio.h>
int main()
{
    int no,i,arr[10001],k,diff;
    scanf("%d %d",&no,&k);
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    diff=no-k;
    if(no>k)
    {
        for(i=diff;i<no;i++)
       {
        printf("%d ",arr[i]);
       }
       for(i=0;i<diff;i++)
    {
        printf("%d ",arr[i]);
    }

    }
    else
    {

    for(i=0;i<no;i++)
    {
        printf("%d ",arr[i]);
    }
    }

}
