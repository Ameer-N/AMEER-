// You are using GCC
#include<stdio.h>
int main()
{
    int no,odd=1,count=1,i,j,odd1;
    scanf("%d",&no);
    for(i=0;i<no+(no-1);i++)
    {

        count=1;
        for(j=0;j<odd;j++)
        {
            printf("%d",count);
            count++;
        }
        if(i<no-1)
        {
        odd+=2;
        }
        else
        {
           odd-=2;
        }
        printf("\n");

    }
}
