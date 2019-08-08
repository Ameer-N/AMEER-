#include <stdio.h>
#include <string.h>

int main () {
   char str1[20];
   char str2[20];
 
   while(scanf("%s",str1)>0)
    {

   if(strcmp(str1,"Saturday")==0 || strcmp(str1,"Sunday")==0 ) {
      printf("yes\n");
   }
  else {
      printf("no\n");
   }
    }

   return 0;
}
