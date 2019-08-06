
#include<stdio.h>
int main()
{

    int no,count=0;
    scanf("%d",&no);
    while(no)
    {
            count++;
            no/=10;

    }
printf("%d",count);
}
