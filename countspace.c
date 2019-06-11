#include<stdio.h>
#include<string.h>
int main()
{
  char a[1000],len=0;
  while(scanf("%s",a)>0)
  {
     len++;
  }
  printf("%d",len-1);
  
}
