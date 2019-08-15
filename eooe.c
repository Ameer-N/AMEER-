#include<stdio.h>

int main()
{
int n,i;
scanf("%d",&n);
int no[n];

for(i=0;i<n;i++)
{
    scanf("%d",&no[i]);
    if((i%2==0 && no[i]%2!=0) || (i%2!=0 && no[i]%2==0) )
    {
        printf("%d ",no[i]);
        
    }
}

}
