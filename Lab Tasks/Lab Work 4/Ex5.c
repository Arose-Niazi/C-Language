#include <stdio.h>

int GCD(int x,int y);
int main()
{
    int x,y;
    for(;;)
    {
        printf("Enter number (-1 to exit): ");
        scanf("%d",&x);
        if(x == -1) break;
        printf("Enter number: ");
        scanf("%d",&y);
        printf("HCF = %d\n\n",GCD(x,y));
    }
    return 0;
}

int GCD(int x,int y)
{
    if(y==0)
        return x;
    return GCD(y,x%y);
}

/*{
    int hcf,loop;
    if(x > y) loop=y;
    else loop=x;
    if(y == 0) return x;
    for(; loop>=1; loop--)
    {
        if(!(x % loop) && !(y % loop))
        {
            hcf=loop;
            break;
        }

    }
    return hcf;
}
*/
