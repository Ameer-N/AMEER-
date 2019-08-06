#include<stdio.h>
int main()
{
char no[1001];
int i;
scanf("%s",no);
for(i=1;i<strlen(no);i+=2)
   printf("%c",no[i]);
 }
