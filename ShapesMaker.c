/*
                            Shapes Maker
    By: Arose Niazi
    FA18-BSE-10
    Last Edited: 9-10-2018
    Functions:
        Draws Squares, with a line between it.
        Draws Diamond of any possible size.
*/

/*
Defines:
        These show the data of program to the user.
*/
#define SW_NAME     "Shapes Maker"
#define DEV         "Arose Niazi"
#define ROLL_NO     "FA18-BSE-10"
#define LAST_EDIT   "9-10-2018"

/*
Includes:
    stdio.h -> Used for basic input output functions.
    conio.h -> Using for getch() function.
*/
#include <stdio.h>
#include <conio.h>


/*
Functions;
    Forwarding the function i.e. declaring these for later use to avoid warnings.
*/

int OnProgramStart();

/*
    Square Program:
        StartSquareProgram -> Starts the square maker, and ask/check the size.
        DrawSquare -> Draws square, and returns back to StartSquareProgram().
*/
int StartSquareProgram();
int DrawSquare(int length);

/*
    Diamond Program:
        StartDiamondProgram -> Starts the square maker, and ask the size.
        CheckValidDiamondSize -> Checks if the size of diamond is possible or not.
        DrawTheDiamond -> Draws diamond, and returns back to StartDiamondProgram().
*/
int StartDiamondProgram();
int DrawTheDiamond(int size);
int CheckValidDiamondSize(int size);

int main() {
    printf("\tProgram Info:\nName: %s\nDeveloped by: %s (%s)\nLast Edited: %s\nFeatures:\n",SW_NAME,DEV,ROLL_NO,LAST_EDIT);
    printf("\tDraws Squares, with a line between it.\n\tDraws Diamond of any possible size.\n\n");
    OnProgramStart();
    return 0;
}

int OnProgramStart() {
    printf("Please select any of the following programs:\n");
    printf("1. Diamond Maker.\n2. Square Maker.\n");
    char option;
    ProgramSelect:option=getch();
    switch(option)
    {
        case '1':
        {
            printf("\nDiamond maker, started... ***Enter -1 to exit***");
            return StartDiamondProgram();
        }
        case '2':
        {
            printf("\nSquare maker, started... ***Enter -1 to exit***");
            return StartSquareProgram();
        }
        default:
        {
            printf("\nPlease enter a valid program number...");
            goto ProgramSelect;
        }
    }
    return 1;
}

int StartSquareProgram() {

    SquareSize:printf("\nPlease enter a square size: ");
    int size;
    scanf("%d",&size);
    if(size == -1) return OnProgramStart();
    if(size <= 0)
    {
        printf("\nPlease enter a valid size.");
        goto SquareSize;
    }
    DrawSquare(size);
    return 1;
}

int DrawSquare(int length) {
    int loop,loop2,space=0;
    for(loop = 0; loop<length; loop++) printf("*");
    for(loop = 0; loop<length-2; loop++)
    {
        printf("\n*");
        space++;
        for(loop2 = 0; loop2<space-1; loop2++) printf(" ");
        printf("*");
        for(loop2 = 0; loop2<(length-space-2); loop2++) printf(" ");
        printf("*");
    }
    printf("\n");
    for(loop = 0; loop<length; loop++) printf("*");
    printf("\n");
    return StartSquareProgram();
}

int StartDiamondProgram() {
    DiamondSize:printf("\nPlease enter a diamond size: ");
    int size;
    scanf("%d",&size);
    if(size == -1) return OnProgramStart();
    if(!CheckValidDiamondSize(size))
    {
        printf("\nPlease enter a valid size, i.e. 3,5,7 or so on...");
        goto DiamondSize;
    }
    DrawTheDiamond(size);
    return 1;
}

int DrawTheDiamond(int size) {
    int loop,loop2,line,spacestoadd=(size-1)/2,reverse=-1,offsetminus=-1,reverse2=0,reversemult=0;
    for(line = 0; line<size; line++)
    {
        if(line == 0 || line == size-1)
        {
            for(loop = 0; loop<(spacestoadd); loop++) printf(" ");
            printf("*\n");
        }
        else
        {
            if(size - line >= 1+spacestoadd)
            {
                offsetminus++;
                for(loop = 0; loop<(spacestoadd-line); loop++) printf(" ");
                printf("*");
                if(line == 1) printf(" ");
                else for(loop = 0; loop<line-offsetminus+((line-1)*2); loop++) printf(" ");
                printf("*\n");
            }
            else
            {
                if(reverse == -1)
                {
                    reverse=line-1;
                    reversemult=size-2;
                }
                reversemult-=2;
                reverse--;
                reverse2++;
                for(loop = 0; loop<reverse2; loop++) printf(" ");
                printf("*");
                if(reverse == 1) printf(" ");
                else for(loop = 0; loop<reversemult; loop++) printf(" ");
                printf("*\n");
            }
        }
    }
    return StartDiamondProgram();
}

int CheckValidDiamondSize(int size) {
    int size2=size-3;
    if(size <= 2) return 0;
    for(int i=0; i<=size2; size2-=2)
    {
         if(size2 == 0) return 1;
    }
    return 0;
}
