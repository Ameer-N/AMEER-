#include<stdio.h>
#include<string.h>
int main()
{
 char no[1001];
 int i,flag=0;
 scanf("%s",no);
 for(i=0;i<strlen(no);i++)
 {

     if(no[i]=='0' || no[i]=='1')
     {

         flag++;
     }

 }
 if(flag==strlen(no))
 {

     printf("yes");
 }
 else
 {

     printf("no");
 }

}

