#include <stdio.h>

//Function Prototypes
int addFunds(int acctNum, float ammToAdd);
int depositMoney(int acctNum, float amt);

int depositMoney(int acctNum, float amt)
{
    int returning = addFunds(acctNum, amt);
    return returning;
}
