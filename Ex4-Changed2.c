/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 04/10/2018.
This programs take input and prints its number separately */

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
    int loop=0,number;//Loop is the counter, as well as our divider here.
    printf("Enter number greater than 0: ");
    scanf("%d",&number);//Storing users number
    for(loop=1; loop<number; loop*=10); //Calucling the power of 10th to the number
    for(loop/=10; loop>=1; loop/=10) //Fixing the offset of 10, then running the loop until we get last number. Dividing it 10 each time.
    {
       printf("%d   ",number/loop); //Dividing the the number to the n'th power of 10 will give us the digit we want. 
       number=number%loop; //Then taking modulus to get the remaning digits.
    }
    return 0;
}
