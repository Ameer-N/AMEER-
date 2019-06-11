#include<stdio.h>
#include<string.h>
int main()
{
char arr[100000];
int len,i;
scanf("%s",arr);
len=strlen(arr);
for(i=len-1;arr[i];i--)
{
printf("%c",arr[i]);
}


}
