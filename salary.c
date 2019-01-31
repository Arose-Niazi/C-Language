/*
                            Calculation of Salary by Taking Basic Salary from user
    By: Muhammad Arose Sibram Khan Niazi
    FA18-BSE-10
    Started On: 21-9-2018
    Last Edited: 21-9-2018
*/
 
/*
Includes:
    stdio.h -> Using for basic input output functions.
    stdlib.h -> Using this for the system function.
*/
 
#include <stdio.h>
#include <stdlib.h>
 
/*
Functions:
        main -> The defualt function called by any C program on start up. We will be using this function only.
 
*/
 
int main()
{//Starting brace of main function
    int BS; //BS variable stores basic pay that the user enters.
    float HRA,MA,Tax,Salary; //HRA variables stores House Rent Allowance, MA stores Medical Allowance, Tax will store how much Tax is applied and Salary will store the Gross salary.
    printf("Enter basic salary\n");//Prints a message on users screen which tells them to enter the basic salary.
    scanf("%d",&BS);//This will take input from the user and store it into BS Basic Salary.
    if(BS > 0)//Checks if salary is more than 0, as salary less than 0 is not a salary.
    {//Opening brace of condition IF.
        //(float) is used for type casting, to change integer values to decimal values.
        if(BS > 60000)//This checks if the BS Basic Salary is more than 60000 or not.
        {
            HRA = (float) 0.4*BS; //This calculates 40% of Basic Salary, type cast it and store it in HRA - House Rent Allowance.
            MA = (float) 0.2*BS; //This calculates 20% of Basic Salary, type cast it and store it in MA - Medical Allowance.
            Tax = (float) 0.15*BS; //This calculates 15% of Basic Salary, type cast it and store it in Tax.
        }
        else if(BS >= 30000)//This is called if the BS Basic Salary is not more than 6000, this will check if the BS Basic Salary is more than or equal to 30000. i.e More than or equal to 30000 and less than or equal to 60000
        {
            HRA = (float) 0.5*BS; //This calculates 50% of Basic Salary, type cast it and store it in HRA - House Rent Allowance.
            MA = (float) 0.15*BS; //This calculates 15% of Basic Salary, type cast it and store it in MA - Medical Allowance.
            Tax = (float) 0.1*BS; //This calculates 10% of Basic Salary, type cast it and store it in Tax.
        }
        else//This is called if the both of above conditions are false. i.e. BS Basic Salary is less than 30000.
        {
            HRA = (float) 0.75*BS; //This calculates 75% of Basic Salary, type cast it and store it in HRA - House Rent Allowance.
            MA = (float) 0.1*BS; //This calculates 10% of Basic Salary, type cast it and store it in MA - Medical Allowance.
            Tax = (float) 0.05*BS; //This calculates 5% of Basic Salary, type cast it and store it in Tax.
        }
        Salary = (float) BS + HRA + MA - Tax;//This calculates the gross salary, type casts Basic Salary (BS), adds up House Rent Allowance (HRA), adds up Medical Allowance (MA) and subtracts Tax from gross salary.
        printf("House Rent Allowance is %0.2f\n",HRA);//This prints the HRA so user can see what he requested.
		printf("Medical Allowance is %0.2f\n",MA);//This prints the MA so user can see what he requested.
		printf("Tax is %0.2f\n",Tax);//This prints the Tax so user can see what he requested.
		printf("Salary is %0.2f\n",Salary);//This prints the gross salary so user can see what he requested. %0.2f is used to show up to 2 decimal place only.
    }//Closing brace of condition IF.
    else
        printf("Invalid salary or job less.\n");//This tells users that his input was not correct.
    system("pause");//This will stop the program from closing as soon as it completes the execution.
    return 0; //Tells that program was executed successfully.
}//Ending brace of main function