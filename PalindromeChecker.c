#include<stdio.h>

int CheckPalindrome(char string[]);
int CheckPalindrome2(char string[]);

int main()
{
    char string[15];
    printf("Enter a word to check for palindrome: ");
    gets(string);
    if(CheckPalindrome2(string)) printf("True");
    else printf("False");
    return 0;
}

int CheckPalindrome(char string[])
{
    char string2[15];
    int i,size,k;
    for(i=size=0; string[i] != '\0'; size++,i++);
    size--;
    for(i=size,k=0; i>=0; i--,k++)
    {
        string2[k]=string[i];
        printf("%c[%d] | %c[%d]\n ",string[i],i,string2[k],k);
    }
    for(i=0; i<=size; i++)
    {
        if(string[i] != string2[i]) return 0;
    }
    return 1;
}

int CheckPalindrome2(char string[])
{
    int i,size,k;
    for(i=size=0; string[i] != '\0'; size++,i++);
    size--;
    for(i=size,k=0; i>=0; i--,k++)
    {
        if(string[i] != string[k]) return 0;
    }
    return 1;
}
