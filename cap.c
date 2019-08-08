 #include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   int i,len;
   char str[1001];
   scanf("%[^\n]s",str);
   for(i=0; str[i]!='\0'; i++)
	{
	    if(i==0)
	    {
           if(str[i]>='a' && str[i]<='z')
           {
          str[i]-=32;

           }
	    }
	     else if(str[i]==' ')
	    {
	        ++i;
           if(str[i]>='a' && str[i]<='z')
           {
          str[i]-=32;

           }
	    }
	     else{
            if(str[i]>='A' && str[i]<='Z')
            {
            str[i]+=32;

           }
	    }

	}
    printf("%s",str);
}
