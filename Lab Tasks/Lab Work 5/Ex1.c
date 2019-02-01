#include <stdio.h>

#define SUBJECTS    10

int main()
{
    float marks[SUBJECTS],agg=0.0,perc;
    int loop;
    for(loop=0; loop<SUBJECTS; loop++)
    {
        printf("Enter marks for subject %d: ",loop+1);
        scanf("%f",&marks[loop]);
        if(marks[loop] > 100.0 || marks[loop] < 0.0)
        {
            loop--;
            continue;
        }
        agg+=marks[loop];
    }
    perc=agg;
    agg/=(float) SUBJECTS;
    perc=(perc/(SUBJECTS*100))*100;
    printf("\n\n\tAggregate\t%0.1f\n\tPercentage\t%0.2f%%",agg,perc);
    return 0;
}
