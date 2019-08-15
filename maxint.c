

#include <stdio.h>
#include<limits.h>
int main()
{
int n,max=INT_MIN,i,j,swap,count=0;
scanf("%d",&n);
int no[n];

for(i=0;i<n;i++)
{
    scanf("%d",&no[i]);
    if(no[i]==0)
    {
        count++;
    }
}

for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(no[i]<no[j])
        {
            swap=no[i];
            no[i]=no[j];
            no[j]=swap;
        }
    }
    //printf("%d",no[i]);
}

if(count!=n)
{
for(i=0;i<n;i++)
{
    printf("%d",no[i]);
}
}
else
{
    printf("0");
}


}
