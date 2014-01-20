#include <stdio.h>

//Function Prototypes
int transferFunds(int acct1, int acct2, float amt);
float checkBalance(int acctNum);
int addFunds(int acctNum, float ammToAdd);
int debitFunds(int acctNum, float ammToAdd);
void printError(int errNo);


/* transferFunds:  transfer funds from acct1 to acct2 in the amount of amt */
int transferFunds(int acct1, int acct2, float amt)
{
    float amtInAcct1 = checkBalance(acct1);

    if(amtInAcct1>=amt)
    {
        int trans = addFunds(acct2, amt);
        if(trans == 0) //This if statement ensures that acct2 exists.
        {
            debitFunds(acct1, amt);
            return 0;
        }
        else
        {
             return -9; //An arbitrary numbernot equal to zero.
        }
    }

    else
    {

        return -10; //An arbitrary number not equal to zero.

    }


}
