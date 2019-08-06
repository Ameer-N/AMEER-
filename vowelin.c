#include<stdio.h>
#include<string.h>
int main()
{
 char str[1001];
 int flag=0,i;
 scanf("%s",str);
 for(i=0;i<strlen(str);i++)
{
   if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
   {
       flag=1;
       break;
   }
}
if(flag==1)
    printf("yes");
else
    printf("no");
}

