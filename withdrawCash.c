#include <stdio.h>

//Function Prototypes
int withdrawCash(int acctNum, int amt);
int debitFunds(int acctNum, float ammToAdd);
float checkBalance(int acctNum);


/* withdrawCash:  deduct amount from account and show message for dispensing */
int withdrawCash(int acctNum, int amt)
{
    float currentBal = checkBalance(acctNum);
    int debitted;

    if(currentBal>= amt)
    {
        debitted= debitFunds(acctNum, amt);
        return 0;
    }
    else
    {
        return -5;
    }

}
