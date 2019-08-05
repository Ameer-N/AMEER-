#include<stdio.h>
#include<limits.h>
int main()
{
   int no,max=INT_MIN,min=INT_MAX,i;
   scanf("%d",&no);
   int arr[no];
   for(i=0;i<no;i++)
   {
   scanf("%d",&arr[i]);
   if(arr[i]<min)
   {
    min=arr[i];

   }
   if(arr[i]>max)
   {
     max=arr[i];

   }
   }
printf("%d %d",min,max);

}
