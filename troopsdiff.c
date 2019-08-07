#include<stdio.h>

int main()
{
    int no1,no;
    while(scanf("%d %d",&no,&no1)>0)
    {
        printf("%d\n",abs(no-no1));
    }
}

