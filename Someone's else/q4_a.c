#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Please enter a number to calculate sum of natural numbers: ");
    scanf("%d",&n);
    int loop,sum=0;

    for(loop=1; loop<=n; loop++)
        sum+=loop;
    printf("Sum: %d",sum);
    getch();
    return 0;
}
