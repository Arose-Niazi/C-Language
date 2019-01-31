/*
                            TicTacToe - Tick Cross
    By: Arose Niazi
    FA18-BSE-10
    Started On: 15-9-2018
    Last Edited: 16-9-2018
    Functions:
        Draws Squares, with a line between it.
        Draws Diamond of any possible size.
*/

/*
Defines:
        These show the data of program to the user.
*/

#define SW_NAME     "TicTacToe"
#define DEV         "Arose Niazi"
#define ROLL_NO     "FA18-BSE-10"
#define STARTED_ON  "15-09-2018"
#define LAST_EDIT   "16-09-2018"

/*
Includes:
    stdio.h -> Using for basic input output functions.
    stdlib.h -> Using for system() function.
    conio.h -> Using for getch() function.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Defines:
        These effect the working of the program.
*/

#define MAX_USER_NAME       30

#define PLAYER_ONE_SYMBOL   'X'
#define PLAYER_TWO_SYMBOL   'O'

#define PLAYER_ONE          0
#define PLAYER_TWO          1

/*
Enum:
    Just for easier use of storing player's data.
*/
enum UserDataEnum {
    Wins,
    Losses,
    Draws
};

/*
Global variables:
        Each of these store something useful defined by their identifiers.

        PlayerData -> Stores Wins,Loses and Draws for both players.
        PlayerName -> Stores both players names.
        TurnOf -> Stores who took the last turn.
        GameTable -> This stores data of all 9 slots.
        GameBeingPlayed -> Stores if the game was being played before or it's a fresh start.

*/
int PlayerData[2][3];
char PlayerName[2][MAX_USER_NAME];

int TurnOf=-1;
int GameTable[3][3];

int GameBeingPlayed=0;

/*
Functions:
        StartNewGame -> This Calls for the starting of game, gives option to change player or continue game.

        GetPlayerOne -> Gets first players data.
        GetPlayerTwo -> Gets second players data.

        StartGame -> This starts the game.

        PrintGameTable -> Prints the tic tac toe table.
        CallForPlayerTurns -> Calls for turns and checks if user enters valid option.

        CheckPossibleWinCase -> This checks if any player has won, game has drawn or still going on.

        GameEnd -> Has three different conditions: 0 - Player one wins, 1- Player two wins and -2 - Game Draw.
        PrintPlayerStats -> Prints players data.

        random_int -> Got this function from StackOverFlow by SleuthEye for getting random user turn as first.

*/
int StartNewGame();

int GetPlayerOne();
int GetPlayerTwo();

int StartGame();

int CheckPossibleWinCase();

int PrintGameTable();
int CallForPlayerTurns();
int GameEnd(int winner);
int PrintPlayerStats();

int random_int(int min, int max);

int main()
{
    printf("\tProgram Info:\nName: %s\nDeveloped by: %s (%s)\nStarted On: %s\nLast Edited: %s\nWorking:\n",SW_NAME,DEV,ROLL_NO,STARTED_ON,LAST_EDIT);
    printf("\t- There are 8 possible winning outcomes.\n");
    printf("\t- Lines can be straight or diagonal.\n");
    printf("\t- First turn iS chosen randomly in each new game.\n");
    printf("\t- You need to place three symbols at least to win.\n");
    printf("\t- To draw the game, all 9 boxes must be filled.\n");
    printf("\t- You can only select the box which has the number written on it.\n");
    StartNewGame();
    return 0;
}

int StartNewGame()
{
    for(int x=0; x<3; x++)
        for(int i=0; i<3; i++)
            GameTable[x][i]=-1;
    if(GameBeingPlayed)
    {
        char Selection='0';
        printf("Please make a selection:-\n\t1. Same players.\n\t2. Change player one.\n\t3. Change player two.\n\t4. Change both players.\n");
        do
        {
            Selection=getch();
        }
        while(Selection != '1' && Selection != '2' && Selection != '3' && Selection != '4');
        switch(Selection)
        {
            case '1': return StartGame();
            case '2':
            {
                GameBeingPlayed=0;
                GetPlayerOne();
                return StartGame();
            }
            case '3':
            {
                GameBeingPlayed=0;
                GetPlayerTwo();
                return StartGame();
            }
        }
    }
    GameBeingPlayed=0;
    GetPlayerOne();
    GetPlayerTwo();
    StartGame();
    return 1;
}

int GetPlayerOne()
{

    printf("\nWelcome user, please enter your name (30 Characters Maximum): ");
    gets(PlayerName[PLAYER_ONE]);
    printf("%s, May the odds be in your favor...\nYour symbol will be: '%c'.",PlayerName[PLAYER_ONE],PLAYER_ONE_SYMBOL);
    PlayerData[PLAYER_ONE][Wins]=PlayerData[PLAYER_ONE][Losses]=PlayerData[PLAYER_ONE][Draws]=0;
    return 1;
}

int GetPlayerTwo()
{
    printf("\nWelcome user, please enter your name (30 Characters Maximum): ");
    gets(PlayerName[PLAYER_TWO]);
    printf("%s, May the force be with you...\nYour symbol will be: '%c'.",PlayerName[PLAYER_TWO],PLAYER_TWO_SYMBOL);
    PlayerData[PLAYER_TWO][Wins]=PlayerData[PLAYER_TWO][Losses]=PlayerData[PLAYER_TWO][Draws]=0;
    return 1;
}

int StartGame()
{
    if(GameBeingPlayed) system("CLS");
    GameBeingPlayed=1;
    TurnOf=-1;
    PrintGameTable();
    CallForPlayerTurns();
    return 1;
}

int PrintGameTable()
{
    int counter=0;
    for(int x=0; x<3; x++)
    {

        printf("\n\t\t|");
        for(int i=0; i<3; i++)
        {
            counter++;
            switch(GameTable[x][i])
            {
                case PLAYER_ONE: {printf("%c|",PLAYER_ONE_SYMBOL); break;}
                case PLAYER_TWO: {printf("%c|",PLAYER_TWO_SYMBOL); break;}
                default: {printf("%d|",counter); break;}
            }
        }
    }
    return 1;
}

int CallForPlayerTurns()
{
    char Selection=-1;
    if(TurnOf == -1)
    {
        TurnOf=rand();
    }
    if(TurnOf == PLAYER_TWO) TurnOf=PLAYER_ONE;
    else TurnOf=PLAYER_TWO;
    printf("\n%s's turn... Please choose a available option.",PlayerName[TurnOf]);
    back:do
    {
        Selection=getch();
    }
    while(Selection != '1' && Selection != '2' && Selection != '3' && Selection != '4' && Selection != '5' && Selection != '6' && Selection != '7' && Selection != '8' && Selection != '9');
    switch(Selection)
    {
        case '1':
        {
            if(GameTable[0][0] != -1) goto back;
            GameTable[0][0]=TurnOf;
            break;
        }
        case '2':
        {
            if(GameTable[0][1] != -1) goto back;
            GameTable[0][1]=TurnOf;
            break;
        }
        case '3':
        {
            if(GameTable[0][2] != -1) goto back;
            GameTable[0][2]=TurnOf;
            break;
        }
        case '4':
        {
            if(GameTable[1][0] != -1) goto back;
            GameTable[1][0]=TurnOf;
            break;
        }
        case '5':
        {
            if(GameTable[1][1] != -1) goto back;
            GameTable[1][1]=TurnOf;
            break;
        }
        case '6':
        {
            if(GameTable[1][2] != -1) goto back;
            GameTable[1][2]=TurnOf;
            break;
        }
        case '7':
        {
            if(GameTable[2][0] != -1) goto back;
            GameTable[2][0]=TurnOf;
            break;
        }
        case '8':
        {
            if(GameTable[2][1] != -1) goto back;
            GameTable[2][1]=TurnOf;
            break;
        }
        case '9':
        {
            if(GameTable[2][2] != -1) goto back;
            GameTable[2][2]=TurnOf;
            break;
        }
    }
    PrintGameTable();
    int winner=CheckPossibleWinCase();
    if(winner != -1) return GameEnd(winner);
    CallForPlayerTurns();
    return 1;
}

int GameEnd(int winner)
{
    switch(winner)
    {
        case PLAYER_ONE ... PLAYER_TWO:
        {
            PlayerData[winner][Wins]++;
            PlayerData[(winner == 1)? 0:1][Losses]++;
            printf("\n\n\t\t%s HAS WON!",PlayerName[winner]);
            break;
        }
        case -2:
        {
            PlayerData[PLAYER_ONE][Draws]++;
            PlayerData[PLAYER_TWO][Draws]++;
            printf("\n\n\t\tDRAW!");
            break;
        }
    }
    PrintPlayerStats();
    StartNewGame();
    return 1;
}

int PrintPlayerStats()
{
    printf("\n%s (%c):- Wins: %d Loses: %d Draws: %d",PlayerName[PLAYER_ONE],PLAYER_ONE_SYMBOL,PlayerData[PLAYER_ONE][Wins],PlayerData[PLAYER_ONE][Losses],PlayerData[PLAYER_ONE][Draws]);
    printf("\n%s (%c):- Wins: %d Loses: %d Draws: %d\n\n",PlayerName[PLAYER_TWO],PLAYER_TWO_SYMBOL,PlayerData[PLAYER_TWO][Wins],PlayerData[PLAYER_TWO][Losses],PlayerData[PLAYER_TWO][Draws]);
    return 0;
}

int CheckPossibleWinCase()
{

    if(GameTable[0][0] == GameTable[0][1] && GameTable[0][0] == GameTable[0][2] && GameTable[0][1] == GameTable[0][2] && GameTable[0][0] != -1) return GameTable[0][0];
    if(GameTable[0][1] == GameTable[1][1] && GameTable[0][1] == GameTable[2][1] && GameTable[1][1] == GameTable[2][1] && GameTable[0][1] != -1) return GameTable[0][1];
    if(GameTable[0][0] == GameTable[1][0] && GameTable[0][0] == GameTable[2][0] && GameTable[1][0] == GameTable[2][0] && GameTable[0][0] != -1) return GameTable[0][0];
    if(GameTable[0][1] == GameTable[1][1] && GameTable[0][1] == GameTable[2][1] && GameTable[0][1] == GameTable[2][1] && GameTable[0][1] != -1) return GameTable[0][1];
    if(GameTable[0][2] == GameTable[1][2] && GameTable[0][2] == GameTable[2][2] && GameTable[1][2] == GameTable[2][2] && GameTable[0][2] != -1) return GameTable[0][2];
    if(GameTable[1][0] == GameTable[1][1] && GameTable[1][0] == GameTable[1][2] && GameTable[1][1] == GameTable[1][2] && GameTable[1][0] != -1) return GameTable[1][0];
    if(GameTable[2][0] == GameTable[2][1] && GameTable[2][0] == GameTable[2][2] && GameTable[2][1] == GameTable[2][2] && GameTable[2][0] != -1) return GameTable[2][0];
    if(GameTable[2][0] == GameTable[1][1] && GameTable[2][0] == GameTable[0][2] && GameTable[1][1] == GameTable[0][2] && GameTable[2][0] != -1) return GameTable[2][0];
    for(int x=0; x<3; x++)
        for(int i=0; i<3; i++)
            if(GameTable[x][i] == -1) return -1;
    return -2;
}

int random_int(int min, int max)
{
    return min + rand() % (max+1 - min);
}
