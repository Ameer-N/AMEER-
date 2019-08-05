#include<stdio.h>
#include<string.h>
int main()
{
char no[1001];
int i;
scanf("%s",no);
for(i=0;i<strlen(no);i++)
  printf("%c ",no[i]);
return 0;
}
