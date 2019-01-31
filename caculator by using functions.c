#include<stdio.h>
int main ()
{
    int no1,no2,op,i,pwr,factorial;
    pwr=1;
    factorial=1;
    printf("enter two number\n");
    scanf("%d%d",&no1,&no2);
    printf("enter 1 for addition\n");
    printf("enter 2 for subtraction\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    printf("enter 5 for power\n");
    printf("enter 6 for factorial\n");
    scanf("%d",&op);
    switch(op)
    {

    case 1:
        {
            printf("%d+%d=%d\n",no1,no2,no1+no2);
            break;
        }
    case 2:
        {
            printf("%d-%d=%d\n",no1,no2,no1-no2);
            break;
        }
    case 3:
        {
            printf("%d*%d=%d\n",no1,no2,no1*no2);
            break;
        }
    case 4:
        {
            printf("%d/%d=%d\n",no1,no2,no1/no2);
            break;
        }
    case 5:
        {
            for(i=1;i<=no2;i++)
            pwr*=no1;
            printf("power is %d\n",pwr);
            break;
        }
    case 6:
        {
            for(i=no1;i>=1;i--)
                factorial*=i;
            printf("factorial is %d\n",factorial);
            break;
        }




        }


    return 0;
}
