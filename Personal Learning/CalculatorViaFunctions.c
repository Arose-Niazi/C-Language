#include <stdio.h>
#include <conio.h>

int GetInput();
void PrintCalculatorMenu();
int Add(int a,int b);
int Sub(int a,int b);
int Mul(int a,int b);
float Div(int a,int b);
int Power(int a,int b);
int Fact(int a);

int main()
{
    int n1,n2,loopbreak=0,power=1;
    long long int fact=1;
    char type;
    n1=GetInput();
    n2=GetInput();
    PrintCalculatorMenu();
    for(;;)
    {
        type=getch();
        switch(type)
        {
            case '+': printf("%d + %d = %d\n",n1,n2,Add(n1,n2)); break;
            case '-': printf("%d - %d = %d\n",n1,n2,Sub(n1,n2)); break;
            case '*': printf("%d * %d = %d\n",n1,n2,Mul(n1,n2)); break;
            case '/': printf("%d / %d = %f\n",n1,n2,Div(n1,n2)); break;
            case '^': printf("%d ^ %d = %d\n",n1,n2,Power(n1,n2)); break;
            case '!': printf("%d! = %d\n",n1,Fact(n1)); break;
            case '$': loopbreak=1; break;
        }
        if(loopbreak == 1) break;
    }
    return 0;
}

int GetInput()
{
    int n1;
    printf("Enter number: ");
    scanf("%d",&n1);
    return n1;
}

void PrintCalculatorMenu()
{
    printf("\n\nSelect the operation.\n");
    printf("\n\t + - Addition");
    printf("\n\t - - Subtraction");
    printf("\n\t * - Multiplication");
    printf("\n\t / - Division");
    printf("\n\t ^ - Power");
    printf("\n\t ! - Factorial");
    printf("\n\t $ - End");
    printf("\n");
}

int Add(int a,int b) {return a+b;}
int Sub(int a,int b) {return a-b;}
int Mul(int a,int b) {return a*b;}
float Div(int a,int b) {return (float) a/b;}
int Power(int a,int b)
{
	if(b == 0)
		return 1;
	return a*Power(a,b-1);
}
int Fact(int a)
{
    if(a == 0)
		return 1;
	return a*Fact(a-1);
}
