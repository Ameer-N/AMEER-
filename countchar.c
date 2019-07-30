#include <stdio.h>
#include<string.h>
int main()
{
   char a[1000];
   int count=0;
   
  while(scanf("%s",a)>0)
  {
      count=count+strlen(a);
  }
  printf("%d",count);

    return 0;
}
