#include<stdio.h>
int main()
{
char str[1001];
scanf("%s",str);
//printf("%d",strlen(str));
if((strlen(str))%2==0)
{
 str[strlen(str)/2]='*';
 str[(strlen(str)/2)-1]='*';

}
else{
    str[strlen(str)/2]='*';
}
printf("%s",str);
}

