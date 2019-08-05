#include<stdio.h>
#include<string.h>
int main()
{
char str[1001];
int i,count=0;
fgets(str,1001,stdin);

for(i=0;i<strlen(str)-1;i++)
{
if((str[i]>='0' && str[i]<='9')||(str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z' )|| (str[i]==' '))
{

}
else
{
++count;
}
}
printf("%d",count);
}
