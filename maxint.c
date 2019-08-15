

#include <stdio.h>
#include<limits.h>
int main()
{
int n,max=INT_MIN,i,j,swap,place=10,no1=0;
scanf("%d",&n);
int no[n];

for(i=0;i<n;i++)
{
    scanf("%d",&no[i]);
    
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
}


for(i=0;i<n;i++)
{
    no1=no[i]+no1*place;

}
    printf("%d",no1);
}
