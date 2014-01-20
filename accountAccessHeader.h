#ifndef ACCOUNTACCESSHEADER_H_INCLUDED
#define ACCOUNTACCESSHEADER_H_INCLUDED

#include <stdio.h>

//Function prototypes
int accountExists(int acctNumb);
static int getAccountIndex(int acctNum);
float getBalance(int acctNum);
int addFunds(int acctNum, float ammToAdd);
static float setBalance(int accNum, float newBalance);
int debitFunds(int acctNum, float ammToAdd);
int showAllAccountNum(void);
float showOtherAccountBal(int accountNum);



#endif // ACCOUNTACCESSHEADER_H_INCLUDED
