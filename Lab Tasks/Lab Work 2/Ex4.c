/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe to check if driver is insured or not*/

/*
Includes:
    stdio.h -> Using for basic input output functions.
*/
#include <stdio.h>

/*
Functions:
    main -> This is called as the starting function by any C Program.
*/
int main()
{
    int married,gender,age;//Integers to store martial status, gender and age.
    printf("\nPlease select your martial status:\n\t1. Married.\n\t2. Unmarried.\n");
    scanf("%d",&married);//Storing users input for martial status
    printf("\nPlease select your gender:\n\t1. Male.\n\t2. Female.\n");
    scanf("%d",&gender);//Storing users input for gender
    printf("\nPlease select your age: ");
    scanf("%d",&age);//Storing users input for age
    if(married == 1) printf("You are insured.\n"); //If driver is married then he/she is insured.
    else
    { //If the driver is not married
        if(gender == 1) //If the driver is male
            if(age > 30) //If the age of driver is more than 30
                printf("You are insured.\n"); //Driver is insured
            else //If the age is less than equal 30
                printf("You are not insured.\n"); //Driver is not insured
        else //If the driver is not male
            if(age > 25) //If the age of driver is more than 25
                printf("You are insured.\n"); //Driver is insured
            else //If the age is less than equal 25
                printf("You are not insured..\n"); //Driver is not insured
    }
    return 0;
}
