
#include <stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
      {
        //   printf("%d",i);
      scanf("%d",&arr[i][j]);
      }
    }
       
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
        if(arr[i][j]==0)
            printf("1 ");
        else
            printf("0 ");
     }

    printf("\n");        
    } 
}
