#include <stdio.h>

//Function Prototypes
float checkBalance(int acctNum);
float getBalance(int acctNum);

/* checkBalance:  return the balance of the specified account */
float checkBalance(int acctNum)
{
    float bal;
    bal = getBalance(acctNum);
    return bal;

}
