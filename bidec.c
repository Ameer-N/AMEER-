#include<stdio.h>
int main()
{
    int no,sum,place,digit,safe;
    scanf("%d",&no);
    while(no)
    {
        place=1;
        sum=0;
        safe=no;
    while(no)
    {
        digit=no%10;
        if(digit)
        {
            sum=sum+1*place;
        }
        else
        {

            sum=sum+0*place;
        }
        place=place*10;
        no/=10;
    }
    no=safe;
    no-=sum;
    printf("%0*d\n",4,sum);
    }
}
