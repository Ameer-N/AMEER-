#include<stdio.h>
int main()
{
int no,i,arr[1000],j,swap;
scanf("%d",&no);
for(i=0;i<no;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<no-1;i++)
{
for(j=i+1;j<no;j++)
{
if(arr[i]>=arr[j])
{
swap=arr[i];
arr[i]=arr[j];
arr[j]=swap;
}

}
}

printf("%d",arr[no/2]);


}
