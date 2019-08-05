#include<stdio.h>

int main()
{
   int no,i,sum=0;
   scanf("%d",&no);
   int arr[no];
   for(i=0;i<no;i++)
   {
   scanf("%d",&arr[i]);
   sum=sum+arr[i];
   }
printf("%d",sum/no);

}
