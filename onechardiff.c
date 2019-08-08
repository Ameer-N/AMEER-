#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[1001],str1[1001];
   int str1len,str2len,max,min,diff,i,j,count=0;
   scanf("%s %s",str,str1);
   str1len=strlen(str);
   str2len=strlen(str1);
   if(str1len>str2len)
    {
    max=str1len;
    min=str2len;

    }
    else
    {
        max=str2len;
        min=str1len;

    }


   diff=max-min;
  // printf("%s %s %d %d %d %d %d",str,str1,str1len,str2len,max,min,diff);
   if(diff==0)
   {
   for(i=0;i<str1len;i++)
   {
       if(str[i]!=str1[i])
           count++;
   }
       if(count<2)
       {
           printf("yes");
       }
       else{
        printf("no");
       }

    }

}

