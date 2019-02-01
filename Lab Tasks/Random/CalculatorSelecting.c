#include <stdio.h>
#include <conio.h>

int main()
{
    int n1,n2,loopbreak=0,power=1,loop;
    long long int fact=1;
    char type;
    printf("Enter first number or base or factorial number: ");
    scanf("%d",&n1);
    printf("Enter second number or power: ");
    scanf("%d",&n2);
    printf("\n\nSelect the operation.\n");
    printf("\n\t + - Addition");
    printf("\n\t - - Subtraction");
    printf("\n\t * - Multiplication");
    printf("\n\t / - Division");
    printf("\n\t ^ - Power");
    printf("\n\t ! - Factorial");
    printf("\n\t $ - End");
    printf("\n");
    for(;;)
    {
        type=getch();
        switch(type)
        {
            case '+': printf("%d + %d = %d\n",n1,n2,n1+n2); break;
            case '-': printf("%d - %d = %d\n",n1,n2,n1-n2); break;
            case '*': printf("%d * %d = %d\n",n1,n2,n1*n2); break;
            case '/': printf("%d / %d = %f\n",n1,n2,(float)n1/n2); break;
            case '^':
                for(loop=1; loop <= n2; loop++) power= power*n1;
                printf("%d ^ %d = %d\n",n1,n2,power); break;
            case '!':
                for(loop=1; loop <= n1; loop++) fact= fact*loop;
                printf("%d! = %d\n",n1,fact); break;
            case '$': loopbreak=1; break;
        }
        if(loopbreak == 1) break;
    }
    return 0;
}
