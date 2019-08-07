#include <stdio.h>
#include<string.h>
int main()
{
   char str[1001],temp;
   int i;
   scanf("%s",str);
   for(i=0;i<strlen(str);i+=2)
   {
       temp=str[i];
       str[i]=str[i+1];
       str[i+1]=temp;

   }
   printf("%s",str);

}
