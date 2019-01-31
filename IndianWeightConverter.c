#include <stdio.h>
#include <conio.h>

void PrintCalculationMenu();
float Ratti(float a);
float Masha(float a);
float Tola(float a);
float Chattank(float a);
float Sair(float a);
float Mann(float a);

int main()
{
    float value;
    int loopbreak=0;
    char option;
    printf("Enter a number: ");
    scanf("%d",&value);
    PrintCalculationMenu();
    for(;;)
    {
        option=getch();
        switch(option)
        {
            case '1': printf("%.02f Ratti -> %.02f Masha\n",value,Ratti(value)); break;
            case '2': printf("%.02f Masha -> %.02f Tola\n",value,Masha(value)); break;
            case '3': printf("%.02f Tola -> %.02f Chattank\n",value,Tola(value)); break;
            case '4': printf("%.02f Chattank -> %.02f Sair\n",value,Chattank(value)); break;
            case '5': printf("%.02f Sair -> %.02f Mann\n",value,Sair(value)); break;
            case '6': printf("%.02f Mann -> %.02f Ton\n",value,Mann(value));; break;
            case '$': loopbreak=1; break;
        }
        if(loopbreak == 1) break;
    }
    return 0;
}

void PrintCalculationMenu()
{
    printf("\n\nSelect the option.\n");
    printf("\n\t 1 - Ratti -> Masha");
    printf("\n\t 2 - Masha -> Tola");
    printf("\n\t 3 - Tola -> Chattank");
    printf("\n\t 4 - Chattank -> Sair");
    printf("\n\t 5 - Sair -> Mann");
    printf("\n\t 6 - Mann -> Ton");
    printf("\n\t $ - End");
    printf("\n");
}

float Ratti(float a) { return a/8.0; }
float Masha(float a){ return a/12.0; }
float Tola(float a){ return a/5.0; }
float Chattank(float a){ return a/16.0; }
float Sair(float a){ return a/40.0; }
float Mann(float a){ return a/28.0; }
