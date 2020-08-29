#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    float salary;

    printf("Please enter age and salary: ");
    scanf("%d%f",&age,&salary);
    printf("Details:\n\tAge: %d\n\tSalary: %0.1f",age,salary);
    getch();
    return 0;
}
