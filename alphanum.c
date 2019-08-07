#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int i;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
        if(str[i]>='0' && str[i]<='9')
              printf("%c",str[i]);
}

