#include<stdio.h>
#include<string.h>
int main()
{
 char str[1001];
 int i,last,count=0;
 scanf("%s",str);
 last=strlen(str)-1;
 for(i=0;i<strlen(str)/2;i++)
{
   if(str[i]==str[last])
   {
       count++;
       printf("%c %d %d\n",str[i],count,(strlen(str)/2));
       last--;
   }
}
if(count==(strlen(str)/2))
    printf("yes");
else
    printf("no");
}

