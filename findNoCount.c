
#include<stdio.h>
int main()
{

    int count=0,i,no,k,no1;
    scanf("%d %d",&no,&k);
    for(i=0;i<no;i++)
    {
     scanf("%d",&no1);
     if(no1==k)
        count++;
    }
    printf("%d",count);

}
