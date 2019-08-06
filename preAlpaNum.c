#include<stdio.h>
#include<string.h>
int main()
{

    char str[1001];
    int count=0,count1=0,i;
    fgets(str,1001,stdin);
    for(i=0;i<strlen(str);i++)
    {

        if(str[i]>='0' && str[i]<='9')
           count++;
        else
        {
            if(str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z')
                 count1++;

        }
    }


     if(count >0 && count1>0)
        printf("Yes");
     else
          printf("No");
}
