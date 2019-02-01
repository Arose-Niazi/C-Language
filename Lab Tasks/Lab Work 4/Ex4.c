#include <stdio.h>
float Celsius(int fh);
float Fahrenheit(int cel);

int main()
{
    int temp;
    printf("Celsius\t\tFahrenheit\n");
    for(temp = 0; temp<=100; temp++) printf("%5d\t\t%7.02f\n",temp,Fahrenheit(temp));
    printf("\nFahrenheit\tCelsius\n");
    for(temp = 32; temp<=212; temp++) printf("%5d\t\t%7.02f\n",temp,Fahrenheit(temp));
    return 0;
}

float Celsius(int fh)
{
    return (fh/1.8)-32;
}

float Fahrenheit(int cel)
{
    return (cel*1.8)+32;
}
