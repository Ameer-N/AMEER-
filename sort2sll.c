#include<stdio.h>
#include<malloc.h>
#include<ctype.h>
typedef struct node
{
    int data;
     struct node *next;
}NODE;

NODE *start,*newnode,*tptr,*prev,*temp;
void display()
{
    for(tptr=start;tptr;tptr=tptr->next)
    {
        printf("%d ",tptr->data);
    }
}
void insert(int input)
{
    newnode=(NODE *)malloc(sizeof(NODE));
    newnode->data=input;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
   {
       for(tptr=start,prev=NULL;tptr && tptr->data<input;prev=tptr,tptr=tptr->next);
       if(tptr==start)
       {
           start=newnode;
       }
       else if(tptr==NULL)
       {
           prev->next=newnode;
       }
       else
       {
           prev->next=newnode;
           newnode->next=tptr;
       }
       
    
   }
}
int main()
{
    int no,ins,i;
scanf("%d",&no);
for(i=0;i<no;i++)
{
    scanf("%d",&ins);
    insert(ins);
}
display();

}
