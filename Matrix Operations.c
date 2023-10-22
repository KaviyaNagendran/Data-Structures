#include<stdio.h>

int main() {
    int row,col;
    scanf("%d%d",&row,&col);
    int A[row][col],Trans[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&A[i][j]);
    printf("Original Matrix\n\n");
    for(int i=0;i<row;i++,printf("\n"))
        for(int j=0;j<col;j++)
            printf("%d ",A[i][j]);
    printf("\n");
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            Trans[j][i]=A[i][j];
    printf("Transpose Matrix\n\n");
    for(int i=0;i<row;i++,printf("\n"))
        for(int j=0;j<col;j++)
            printf("%d ",Trans[i][j]);
    int Right[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            Right[i][j]=0;
    int x=0,y=row-1;
    for(int i=0;i<row/2;i++)
    {
        while(x<y)
        {
            for(int k=0;k<row;k++)
            {
                Right[x][k]=Trans[y][k];
                Right[y][k]=Trans[x][k];
            }
            x++;y--;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(Right[i][j]==0)
                Right[i][j]=Trans[i][j];
        }
    }
    printf("\n");
    printf("Right Rotation Matrix\n\n");
    for(int i=0;i<row;i++,printf("\n"))
        for(int j=0;j<col;j++)
            printf("%d ",Right[i][j]);
            
            
    int Left[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            Left[i][j]=0;
    int a=0,b=row-1;
    for(int i=0;i<row/2;i++)
    {
        while(a<b)
        {
            for(int k=0;k<row;k++)
            {
                Left[k][a]=Trans[k][b];
                Left[k][b]=Trans[k][a];
            }
            a++;b--;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(Left[i][j]==0)
                Left[i][j]=Trans[i][j];
        }
    }
    printf("\n");
    printf("Left Rotation Matrix\n\n");
    for(int i=0;i<row;i++,printf("\n"))
        for(int j=0;j<col;j++)
            printf("%d ",Left[i][j]);
    
}
