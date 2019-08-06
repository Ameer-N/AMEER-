#include<stdio.h>
#include<math.h>
int main()
{
 int no,count=0;
scanf("%d",&no);
while(no)
 {
     no/=2;
     count++;
 }
 double ans=pow(2.0,(double)((count-1)+1));

 printf("%d",(int)ans);
}

