#include <stdio.h>

int main()
{
    int matric[4][4],i,k,hold;
    for(i=0; i<4; i++)
    {
        for(k=0; k<4; k++)
        {
            printf("Enter value for [%d][%d]: ",i,k);
            scanf("%d",&matric[i][k]);
        }

    }
    for(i=0; i<4; i++)
    {
        for(k=0; k<4; k++)
        {
            printf("%3d   ",matric[i][k]);
        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        for(k=i; k<4; k++)
        {
            hold=matric[i][k];
            matric[i][k]=matric[k][i];
            matric[k][i]=hold;
        }
    }
    for(i=0; i<4; i++)
    {
        for(k=0; k<4; k++)
        {
            printf("%3d   ",matric[i][k]);
        }
        printf("\n");
    }
    return 0;
}
