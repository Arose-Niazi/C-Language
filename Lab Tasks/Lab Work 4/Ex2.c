#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num1=(rand() % 2) + 1,num2=(rand() % 100) + 1,num3=(rand() % 10),num4=(rand() % 112) + 1000,num5=(rand() % 2) -1 ,num6=(rand() % 13) - 2;
    printf("%d\n%d\n%d\n%d\n%d\n%d",num1,num2,num3,num4,num5,num6);
    return 0;
}
