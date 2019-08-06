#include<stdio.h>
int main()
{
char no[1001];
int i;
scanf("%s",no);
for(i=0;i<strlen(no);i++)
   if(no[i]%2!=0)
      printf("%c ",no[i]);
 }
