#include<stdio.h>
int main()
{
int rem,no,no2,safe,sum=0,i;
scanf("%d %d",&no,&no2);
for(i=no;i<=no2;i++)
{
    sum=0;
safe=i;
while(safe)
{
    rem=safe%10;
    sum=sum+rem*rem*rem;
    safe/=10;
}
if(i==sum)
{
    printf("%d ",sum);
}

}


}
