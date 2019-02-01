/* This programme is prepared by (FA18-BSE-010) Arose Niazi on 08/10/2018.
This programs takes information about users account and prints it's balance and if they have crossed the limit or not */

/*
Includes:
    stdio.h -> Using for basic input output functions.
*/
#include <stdio.h>

/*
Functions:
    main -> This is called as the starting function by any C Program.
*/
int main()
{
    int acc_no;//Account number
    float i_balance,t_credit,credit_limit,t_charges,balance;//Inital Balance,Total Credit, Credit Limit, Total Charge, and Balance.
    for(; ;) //Running an infinite loop
    {
        printf("Enter account number (-1 to end): ");
        scanf("%d",&acc_no);
        if(acc_no == -1) break; //If user enters the account number as -1 (Sentinal Value) Break the loop
        printf("Enter initial balance: ");
        scanf("%f",&i_balance);
        printf("Enter total charge: ");
        scanf("%f",&t_charges);
        printf("Enter total credit: ");
        scanf("%f",&t_credit);
        printf("Enter credit limit: ");
        scanf("%f",&credit_limit);
        balance = i_balance+t_charges-t_credit;//Balance = Inital Balance + Total Charge - Total Credit
        printf("Account: %d\nCredit limit: %0.2f\nBalance: %0.2f\n",acc_no,credit_limit,balance);
        if(balance > credit_limit) printf("Credit Limit Exceeded\n"); //If the balance is more than credit limit
        printf("\n");//New line
    }
    return 0;
}
