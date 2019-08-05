#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],str1[1001];
    scanf("%s %s",str,str1);
    (strlen(str)>strlen(str1))?printf("%s",str):printf("%s",str1);
}
