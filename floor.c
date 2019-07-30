#include<stdio.h>
int main()
{

    int floor,i,flag=1,prev;
    scanf("%d",&floor);
    int li[1000],ri[1000],map[1000],right=0,left=0,cur_floor,count=0;
    for(i=1;i<=floor;i++)
    {

        map[i]=1;
    }

    for(i=1;i<floor;i++)
    {
        scanf("%d %d",&li[i],&ri[i]);
        map[li[i]]=map[ri[i]]=0;
    }
    for(i=1;i<=floor;i++)
    {
        if(map[i]!=0)
        {
          flag=0;

        }

    }

    if(flag==0)
    {

        printf("impossible");
    }
    else
    {
        cur_floor=1;
        i=1;
        while(cur_floor!=floor)
        {
            //prev=cur_floor;
           map[cur_floor]++;

            if(map[cur_floor]%2==0)
            {
                 cur_floor=ri[right];
                 right++;

            }

            else if(map[cur_floor]%2!=0)
            {
                cur_floor=li[left];
                left++;

            }
            printf("%d \n",cur_floor);
            //printf("%d %d ",map[prev]++,prev);
            count++;
        }
        //printf("%d",count);
    }

}
