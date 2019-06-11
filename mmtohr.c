#include<stdio.h>

int main()
{
   int mm,hr,bal;
   scanf("%d",&mm);
   if(mm>0)
   {
   hr=mm/60;
   bal=mm-(60*hr);
   printf("%d %d",hr,bal);
   }
}
