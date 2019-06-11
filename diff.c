#include<stdio.h>
#include<stdlib.h>
int main()
{
   int h1,h2,m1,m2;
   scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
   if(h1>=0 && h2>=0 && m1>=0 && m2>=0)
      printf("%d %d",abs(h1-h2),abs(m1-m2));
}
