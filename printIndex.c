

#include <stdio.h>
#include<limits.h>
int main()
{
int n,i,flag=0;
scanf("%d",&n);
int no[n];

for(i=0;i<n;i++)
{
    scanf("%d",&no[i]);
    if(no[i]==i)
    {
    printf("%d ",no[i]);
    flag=1;
    }
}
if(flag==0)
    printf("-1");

}


