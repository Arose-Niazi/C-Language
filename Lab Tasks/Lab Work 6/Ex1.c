/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 19/11/2018.
This program prints the size,value etc. of variables*/

#include <stdio.h>

int main()
{
    int i=10;
    char c='A';
    double f=2.25;
    int *iptr=&i;
    char *cptr=&c;

    printf("i = %d\n",i);
    printf("&i = %p\n",i);
    printf("iptr = %d\n",iptr);
    printf("&iptr = %p\n",iptr);
    printf("*iptr = %d\n",*iptr);
    printf("iptr = %d\n",sizeof(iptr));
    printf("i = %d\n",sizeof(i));

    printf("c = %c\n",c);
    printf("&c = %p\n",c);
    printf("cptr = %c\n",cptr);
    printf("&cptr = %p\n",cptr);
    printf("*cptr = %c\n",*cptr);
    printf("cptr = %d\n",sizeof(cptr));
    printf("c = %d\n",sizeof(c));
    return 0;
}
