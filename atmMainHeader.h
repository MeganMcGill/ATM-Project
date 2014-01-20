#ifndef ATMMAINHEADER_H_INCLUDED
#define ATMMAINHEADER_H_INCLUDED

//Megan McGill and Megan Lauzon

#include <stdio.h>


#define SCREEN_HEIGHT 80    // Number of newlines to print out
#define MAXLINE 100         // Maximum user input characters

// Function prototypes need to be chucked into a header.... but this is fine for now.
double readUserInput(void);
void displayMenu(void);
int accountExists(int acctNumb);
float checkBalance(int acctNum);
void printError(int errNo);
int transferFunds(int acct1, int acct2, float amt);
int withdrawCash(int acctNum, int amt);
float getInterestRate(void);
int setInterestRate(float rate);
float computeInterest(float currentBal);
int depositMoney(int acctNum, float amt);
float addInterestToAccount(int acctNum);
int showAllAccountNum(void);
float showOtherAccountBal(int accountNum);



#endif // ATMMAINHEADER_H_INCLUDED
