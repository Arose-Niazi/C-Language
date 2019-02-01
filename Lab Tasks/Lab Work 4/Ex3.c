#include <stdio.h>
#include <math.h>

float calculate_charges(int hours);

int main()
{
    float hours[3],charge,total_charge=0.0,total_hours=0.0;
    int loop;
    for(loop=0; loop<=2; loop++)
    {
        printf("Enter the hours parked for car %d: ",loop+1);
        scanf("%f",&hours[loop]);
    }
    printf("Car\tHours\tCharge\n");
    for(loop=0; loop<=2; loop++)
    {
        charge=calculate_charges(ceil(hours[loop]));
        total_charge+=charge;
        total_hours+=hours[loop];
        printf("%d\t%5.2f\t%5.02f\n",loop+1,hours[loop],charge);
    }
    printf("TOTAL\t%5.2f\t%5.02f\n",total_hours,total_charge);
    return 0;
}

float calculate_charges(int hours)
{
    if(hours > 17)
    {
        return 10.0;
    }
    else if(hours <= 3) return 2.0;
    else
    {
        return (((float)hours-3.0)*0.5)+2.0;
    }
}
