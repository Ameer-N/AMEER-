#include<stdio.h>
#include <string.h>

int main()
{
char a[2001];
int len,i,l=0,mid,j;
scanf("%s",a);
len=strlen(a);
// mid=len/2;
if(len>=3 && len%2!=0)
{
   for(i=len;i<len+len;i++)
   {
       a[i]=a[l];
       l++;
   }
}
printf("%d",len);
for(i=0;i<len;i++)
{ mid=len/2;
    for(j=0;j<len;j++)
    {
        if(i+j>=len-1)
        {
            printf("%c",a[mid]);
            mid++;
        }
        else
        {
            printf("*");
        }
    }
    printf("\n");
}
}
