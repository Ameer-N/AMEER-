#include<stdio.h>
#include<string.h>
int main()
{
 int no,i,flag=0;
 scanf("%d",&no);
 for(i=2;i<=no/2;i++)
{
 if(no%i==0)
 {
     flag=1;
     break;

 }

  }
  if(flag==0)
  {

      printf("yes");
  }
  else{
    printf("no");
  }
}

