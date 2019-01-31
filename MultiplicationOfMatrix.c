#include <stdio.h>

#define SIZE		2

int main()
{
    int a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE]={},i,j,k;
    for(i=0; i<SIZE; i++)
    {
        for(k=0; k<SIZE; k++)
        {
            printf("Enter value for a[%d][%d]: ",i,k);
            scanf("%d",&a[i][k]);
            printf("Enter value for b[%d][%d]: ",i,k);
            scanf("%d",&b[i][k]);
        }

    }
    for(i=0; i<SIZE; i++)
    {
        for(k=0; k<SIZE; k++)
        {
            for(j=0; j<SIZE; j++)
            {
                c[i][k]+=a[i][j]*b[j][k];
            }

        }
    }
    for(i=0; i<SIZE; i++)
    {
        for(k=0; k<SIZE; k++)
        {
            printf("%3d   ",a[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<SIZE; i++)
    {
        for(k=0; k<SIZE; k++)
        {
            printf("%3d   ",b[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<SIZE; i++)
    {
        for(k=0; k<SIZE; k++)
        {
            printf("%3d   ",c[i][k]);
        }
        printf("\n");
    }
    return 0;
}
