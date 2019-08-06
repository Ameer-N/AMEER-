#include<stdio.h>
#include<limits.h>
int main()
{
  int arr[11],i,min=INT_MAX;
  for(i=0;i<10;i++)
  {
     scanf("%d",&arr[i]);
     if(arr[i]<min)
    {
     min=arr[i];
     }
  }

  printf("%d",min);

}
