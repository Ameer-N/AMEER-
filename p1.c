#include<stdio.h>
int main()
{
    int **matrix,nor,noc,row,col,*pattern,val=1,p_size,index;
    scanf("%d",&nor);
    scanf("%d",&noc);

    matrix=(int **)malloc(nor*sizeof(int*));
    for(row=0;row<nor;row++)
    matrix[row]=(int *)malloc(noc*sizeof(int));

    scanf("%d",&p_size);
    pattern=(int *)malloc(p_size*sizeof(int));

    for(row=0;row<nor;row++)
        for(col=0;col<noc;col++)
            matrix[row][col]=val++;

    for(index=0;index<p_size;index++)
        scanf("%d",&pattern[index]);

    for(row=0;row<nor;row++)
        for(col=0;col<noc;col++)
            if(matrix[row][col]==pattern[0])
                if(patSearch(matrix,nor,noc,pattern,p_size,row,col))
                    printf("Yes");
    return 0;
}
patSearch(int **matrix,int nor,int noc,int *pattern,int p_size,int start_row,int start_col)
{
    int row,col,pindex;

    //row checking
    for(row=start_row,col=start_col+1,pindex=1;col<noc && pindex<p_size;col++,pindex++)
        if(matrix[row][col]!=pattern[pindex])
            break;
    if(pindex == p_size)
        return 1;

    //column check
    for(row=start_row+1,col=start_col,pindex=1;row<nor && pindex<p_size;row++,pindex++)
        if(matrix[row][col]!=pattern[pindex])
            break;
    if(pindex == p_size)
        return 1;

    //right diagonal
    for(row=start_row+1,col=start_col+1,pindex=1;row<nor && col<noc && pindex<p_size;row++,col++,pindex++)
        if(matrix[row][col]!=pattern[pindex])
            break;
    if(pindex == p_size)
        return 1;

    //left diagonal
    for(row=start_row+1,col=start_col-1,pindex=1;row<nor && col>=0 && pindex<p_size;row++,col--,pindex++)
        if(matrix[row][col]!=pattern[pindex])
            break;
    if(pindex == p_size)
        return 1;

    return 0;
}
