/*
                            Ratti - Tola - Masha - Ser
                                    Converter
    By: Arose Niazi
    FA18-BSE-10
    Started On: 2-11-2018
    Last Edited: 2-11-2018
*/

/*
Includes:
    stdio.h -> Using for basic input output functions.
    conio.h -> Using for getch() function.
*/
#include <stdio.h>
#include <conio.h>


/*
User defined functions:
    PrintMenu -> Prints the available menu for the user.
    rattiTomasha -> Converts ratti to masha
    mashaToratti -> Converts masha to ratti
    mashaTotola -> Converts masha to tola
    tolaTomasha -> Converts tola to masha
    tolaToSer -> Converts tola to ser
    serTotola -> Converts ser to tola
*/

void PrintMenu();

float rattiTomasha(float x);
float mashaToratti(float x);
float mashaTotola(float x);
float tolaTomasha(float x);
float tolaToser(float x);
float serTotola(float x);

/*
    Global String Array's:
        Conversions -> store the name of units.
        ConversionsOrderIn -> stores the order in which we take input (per option).
        ConversionsOrderOut -> stores the order in which we give output (per option).

    Using these so we can easily add more functions to program later on i.e very flexible just change these names and add functions.

*/
const char *Conversions[4] = {
    "ratti","masha","tola","ser"
};

const char *ConversionsOrderIn[6] = {
    "ratti","masha","masha","tola","tola","ser"
};

const char *ConversionsOrderOut[6] = {
    "masha","ratti","tola","masha","ser","tola"
};

/*
    Type:
        Defining a type for calling the functions using function pointers.

    Float is the type of our function.
    FunctionCallback is pointer for our functions.
    Parameter for our functions is just float.
    FunctionCallback Functions will store the addresses of each functions in pointers.
*/

typedef float (*FunctionCallback)(float);
FunctionCallback Functions[6] = {
    &rattiTomasha, //Function[0] -> Stores address of rattiTomasha
    &mashaToratti, //Function[1] -> Stores address of mashaToratti
    &mashaTotola, //Function[2] -> Stores address of mashaTotola
    &tolaTomasha, //Function[3] -> Stores address of tolaTomasha
    &tolaToser, //Function[4] -> Stores address of tolaToser
    &serTotola, //Function[5] -> Stores address of serTotola
};


int main()
{
    char selection; //Using for the choice.
    float weight; //To store the weight that is to be converted.
    PrintMenu();
    int size=(sizeof(ConversionsOrderIn)/sizeof(float))+1; //Possible options would be 1 more than the sizeof array/size of type as we start from 1 instead of 0
    while((selection=getch()) != size+48) //Checks if selection is not equal to size+48 (48 is ASCII for 0).
    {
        if(selection > 48 && selection < size+48) putch(selection);//Prints selection if selection is 1-size
        else continue;//else it skips
        printf("\nEnter weight in %s: ",ConversionsOrderIn[selection-49]);//Will print the option user selected. selection-49 will start index from 0-size.
        scanf("%f",&weight);
        printf("%.0f %s = %.0f %s",weight,ConversionsOrderIn[selection-49],Functions[selection-49](weight),ConversionsOrderOut[selection-49]);//Does prints the strings, and calls function with function pointer.
        PrintMenu();
    }
    printf("\nThis program is created by \"Arose Niazi\"");
    return 0;
}

void PrintMenu()
{
    int loop,counter=1;;
    for(loop=0; loop<(sizeof(Conversions)/sizeof(float))-1; loop++)//Will run loop times the possible combinations.
    {
        printf("\nEnter %d %s to %s",counter++,Conversions[loop],Conversions[loop+1]);
        printf("\nEnter %d %s to %s",counter++,Conversions[loop+1],Conversions[loop]);
    }
    printf("\nEnter %d to exit\nYour choice: ",counter);
}

float rattiTomasha(float x) {return x/8.0;}
float mashaToratti(float x) {return x*8.0;}
float mashaTotola(float x) {return x/12.0;}
float tolaTomasha(float x) {return x*12.0;}
float tolaToser(float x) {return x/80.0;}
float serTotola(float x) {return x*80.0;}
