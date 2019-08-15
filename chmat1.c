
#include <stdio.h>

int main()
{
    int n,m,i,j,k;
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
        {
            for(k=j;k>=0;k--)
              arr[i][k]=-1;
            //   printf("%d %d",arr[i][k]);
               
            for(k=j;k<m;k++)
              arr[i][k]=-1;
               
            for(k=i;k>=0;k--)
              arr[k][j]=-1;
               
            for(k=i;k<n;k++)
              arr[k][j]=-1; 
        }   
     }
    }
    
     for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
         if(arr[i][j]==-1)
            printf("0 ");
          else
          printf("%d ",arr[i][j]);
     }
      printf("\n");        
    } 
}
