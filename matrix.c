#include<stdio.h>

int main()
{
    printf("matrix multiplicaton ");
    
    int r1,r2,c1,c2;
    printf("Enter number of rows columns for first Matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows columns for Second Matrix:\n");
    scanf("%d %d",&r2,&c2);
  
    if(c1!=r2)
    {
        printf("Matrices Can't be multiplied together because c1 and r2 dont match\n please check\n what coder you are \n");
    }
    else
    {
        int m1[r1][c1],m2[r2][c2];
        printf("Enter first matrix elements \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("Enter element no %d%d \n",i,j);
                scanf("%d",&m1[i][j]);
            }
        }
        printf("entered matrix\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("|%d| \t",m1[i][j]);
            }
            printf("\n");
        }
            
        printf("Enter Second matrix elements\n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("Enter element no %d%d \n",i,j);
                scanf("%d",&m2[i][j]);
            }
        }
        printf("entered matrix\n");
            for(int i=0;i<r2;i++)
            {
                for(int j=0;j<c2;j++)
                {
                    printf("|%d| \t",m2[i][j]);
                }
                printf("\n");
            }
        int mul[r1][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    mul[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        printf("Multiplied matrix\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("|%d| \t",mul[i][j]);
            }
            printf("\n");
           
        }
    }
    return 0;
}
    
