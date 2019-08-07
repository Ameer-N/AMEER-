#include<stdio.h>
int main()
{
    int n,m,prod,sum=0,i,per;
    scanf("%d %d",&n,&m);
    prod=n*m;
    for(i=1;sum<=prod;i+=2)
    {
        sum=sum+i;
        if(sum<=prod)
           per=sum;
    }if(per==prod)
          printf("yes");
     else
        printf("no");
}
