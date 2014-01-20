#include <stdio.h>

//Function Prototypes
float checkBalance(int acctNum);
float computeInterest(float currentBal);
int addFunds(int acctNum, float ammToAdd);
float addInterestToAccount(int acctNum);

float addInterestToAccount(int acctNum)
{
    float bal = checkBalance(acctNum);
    float interest = computeInterest(bal);
    int newBal = addFunds(acctNum, interest);
    return newBal;

}
