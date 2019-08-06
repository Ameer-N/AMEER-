
#include<stdio.h>
int main()
{

    int count=0,i,no,k,no1,flag=0;
    scanf("%d %d",&no,&k);
    for(i=0;i<no;i++)
    {
     scanf("%d",&no1);
     if(no1==k)
     {
        flag=1;
        break;

     }
    }
    (flag==1)?printf("yes"):printf("no");

}
