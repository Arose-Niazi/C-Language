/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 01/10/2018.
This programe calculates and prints user grade, status and percentage*/

/*
Includes:
    stdio.h -> Using for basic input output functions.
*/
#include <stdio.h>

/*
Defines:
        These effect the working of the program.
*/
#define MAX_SUBJECTS    5

/*
Functions:
    main -> This is called as the starting function by any C Program.
*/

char *Grades[] = {
	"A","A-","B+","B","B-","C+","C","C-","D","F"
};
int main()
{//Start of main function
    float marks,total=0.0;//Creating an float variable marks and total variable to store the total marks of the user
    int loop; //declaring integer for the use in loop

    for(loop=0; loop < MAX_SUBJECTS; loop++)//The loop, which will run the amount of times we have defined the max subjects
    {//Start of loop body
        printf("Please enter marks of subject %d out of 100: ",loop+1);//As loop value starts from 0, so we add 1 to fix the offset.
        scanf("%f",&marks);//Storing the users data in marks
        if(marks > 100 || marks < 0) loop--; //Checking if the marks are valid or not.
        else total+=marks;
    }
    total=total/MAX_SUBJECTS;//Calculating the percentage of user.
    printf("\nRESULT:\n");//Printing the words result on screen
    if(total >= 90.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 4.0\n\tStatus: Excellent\n","A+",total); //Printing users status, grade,credit points, and percentage ....
    else if(total >= 85.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 3.7\n\tStatus: Excellent\n","A-",total);
    else if(total >= 80.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 3.3\n\tStatus: Excellent\n","B+",total);
    else if(total >= 75.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 3.0\n\tStatus: Good\n","B",total);
    else if(total >= 70.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 2.7\n\tStatus: Good\n","B-",total);
    else if(total >= 65.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 2.3\n\tStatus: Good\n","C+",total);
    else if(total >= 60.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 2.0\n\tStatus: Average\n","C",total);
    else if(total >= 55.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 1.7\n\tStatus: Average\n","C-",total);
    else if(total >= 50.0) printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 1.3\n\tStatus: Minimum Passing\n","D",total);
    else printf("\tGrade: %s\n\tPercentage: %0.2f\n\tCredit Point: 0.0\n\tStatus: Fail\n","F",total);
    return 0;//Returning that the execution was successful.
}//End of main function
