#include<stdio.h>
#include<string.h>
char sort(char* str,int pos,int len)
{
    char swap;
    int i,j;
printf("%s\n",str);
for(i=pos+1;i<len-1;i++)
{
    for(j=i+1;j<len;j++)
    {
        if(str[i]>str[j])
        {

        swap=str[i];
        str[i]=str[j];
        str[j]=swap;
        }

    }
}

}




char findlarge(char* str)
{
int len,count=0,i,swappos,j;
char swap;
len=strlen(str)-1;
for(i=len;i>0;i--)
{
    for(j=len-1;j>=0;j--)
    {
    if(str[i]<str[j])
    {
        //printf("%d %d ",str[i]-'0',str[i-1]-'0');
      count++;
    }
    else
    {
        swappos=j ;
        swap=str[i];
        str[i]=str[swappos];
        str[swappos]=swap;
        //sort(&str,i-1);
        printf("%s%d\n",str,swappos);
       sort(str,swappos,len);
        break;
    }
    }
    if(count==len)
    {
        printf("-1");
    }


}

//printf("%d%s",swappos,str);

}



int main()
{
    char str[1001];
    scanf("%s",str);
    findlarge(str);

}
