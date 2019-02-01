#include <stdio.h>

int main()
{
    int loop;
    printf("a.\n");
    loop=1;
    while(loop <= 100)
    {
        printf("%d ",loop);
        loop++;
    }
    printf("\n\nb.\n");
        printf("a.\n");
    loop=100;
    while(loop >= 1)
    {
        printf("%d ",loop);
        loop--;
    }
    printf("\n\nc.\n");
    loop=20;
    while(loop >= 2)
    {
        printf("%d ",loop);
        loop-=2;
    }
    printf("\n\nd.\n");
    loop=2;
    while(loop <= 20)
    {
        printf("%d ",loop);
        loop+=3;
    }
    printf("\n\ne.\n");
    loop=99;
    while(loop >= 0)
    {
        printf("%d ",loop);
        loop-=11;
    }
    return 0;
}
