#include<stdio.h>
#include<string.h>
//count
int main()
{
  char a[1000],len=0,count=0,i;
  while(scanf("%s",a)>0)
  {
   len=strlen(a);
   for(i=0;i<len;i++)
   {
       if(a[i]=='.')
       {
           count++;
       }
   }
   printf("%d",count+1);
  }
  
}
