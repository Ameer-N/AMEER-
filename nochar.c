#include<stdio.h>
#include<string.h>
int main()
{
  char a[1000],len=0,count=0,i;
  while(scanf("%s",a)>0)
  {
   len=strlen(a);
   for(i=0;i<len;i++)
   {
       if(a[i]>='0' && a[i]<='9')
       {
           count++;
       }
   }
   printf("%d",count);
  }
  
}
