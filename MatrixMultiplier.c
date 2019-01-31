#include <stdio.h>

int main()
{
    int row[2],col[2],i,j,k;
    for(i=0; i<2; i++)
    {
        if(i == 0)
        {
            printf("Enter the order of matrix A: ");
            scanf("%d%d",&row[i],&col[i]);
            if(row[i] < 1 ||  col[i] < 1)
            {
                printf("Error: Please enter a valid order.");
                i--;
                continue;
            }
        }
        else
        {
            row[1]=col[0];
            printf("Enter the column size of matrix B: ");
            scanf("%d",&col[i]);
            if(col[i] < 1)
            {
                printf("Error: Please enter a valid column size.");
                continue;
            }
            break;
        }
    }
    int matrix_a[row[0]][col[0]];
    int matrix_b[row[1]][col[1]];
    int matrix_c[row[0]][col[1]];
    for(i=0; i<row[0]; i++)
        for(k=0; k<col[0]; k++)
        {
            printf("Enter value for matrix A [%d][%d]: ",i+1,k+1);
            scanf("%d",&matrix_a[i][k]);
        }
    for(i=0; i<row[1]; i++)
        for(k=0; k<col[1]; k++)
        {
            printf("Enter value for matrix B [%d][%d]: ",i+1,k+1);
            scanf("%d",&matrix_b[i][k]);
        }
    for(i=0; i<row[0]; i++)
        for(k=0; k<col[1]; k++)
            matrix_c[i][k]=0;
    for(i=0; i<row[0]; i++)
        for(k=0; k<col[1]; k++)
            for(j=0; j<row[1]; j++)
                matrix_c[i][k]+=matrix_a[i][j]*matrix_b[j][k];
    printf("\n\nMatrix A\n");
    for(i=0; i<row[0]; i++)
    {
        for(k=0; k<col[0]; k++)
            printf("%5d   ",matrix_a[i][k]);
        printf("\n");
    }
    printf("\n\nMatrix B\n");
    for(i=0; i<row[1]; i++)
    {
        for(k=0; k<col[1]; k++)
            printf("%5d   ",matrix_b[i][k]);
        printf("\n");
    }
    printf("\n\nMatrix C=A*B\n");
    for(i=0; i<row[0]; i++)
    {
        for(k=0; k<col[1]; k++)
            printf("%5d   ",matrix_c[i][k]);
        printf("\n");
    }
    return 0;
}
