#include<stdio.h>
#include<limits.h>
int main()
{
    char str[1001];
    int k,i;
    scanf("%s %d",str,&k);
    for(i=0;i<k;i++)
        printf("%s\n",str);
}
