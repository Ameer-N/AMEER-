 #include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   int i,value=0;
   char str[1001];
   scanf("%s",str);
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]=='I')
       {
           if(str[i+1]=='X')
           {
               value+=9;
               i++;
           }
           else
           {
            value+=1;
           }

       }
       else if(str[i]=='V')
       {
        value+=5;
       }
       else if(str[i]=='X')
       {
        value+=10;
       }
   }
   printf("%d",value);
}
