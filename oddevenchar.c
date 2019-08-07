#include <stdio.h>
#include<string.h>
int main()
{
   char str[1001];
   int i;
   scanf("%s",str);
   for(i=0;i<strlen(str);i+=2)
      printf("%c",str[i]);
   printf(" ");
   for(i=1;i<strlen(str);i+=2)
      printf("%c",str[i]);
}
