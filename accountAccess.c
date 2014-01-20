#include "accountAccessHeader.h"
//List of account numbers
static int accountList[] =   {1234,   5289,    8744,  6912,  3421,   9658,  1487,  1147,     5732};
//List of corresponding balances for each account (in same order of account number above)
static float balanceList[] = {4798.32,19628.89,150.78,100.00,6742.00,874.05,543.91,578963.45,8943.12};

int accountExists(int acctNumb)
{
    int exists;
    exists = getAccountIndex(acctNumb);
    if(exists == -1)
    {
        return -1;
    }
    else
    {
        return exists;
    }

}


/* getAccountIndex:  get the array index for the specified account */
static int getAccountIndex(int acctNum)
{
    int i;
	for(i=0;i<sizeof(accountList)/sizeof(int);++i)
	{
		if(acctNum == accountList[i])
		{
			return i;
		}
	}

	return -1;
}
float getBalance(int acctNum)
{
    int index;
    float currentBal;

    index = getAccountIndex(acctNum);
    currentBal = balanceList[index];
    return currentBal;

}
int addFunds(int acctNum, float ammToAdd)
{
    int index;
    float accBal;
    float newBal;
    int setBal;

    index = getAccountIndex(acctNum);
    if(index!=-1)
    {
        accBal = getBalance(acctNum);
        newBal = accBal+ammToAdd;
        setBal = setBalance(acctNum, newBal);
        return 0;
    }
    else
    {
        return -5; //arbitrary number not equal to 0.
    }
}
static float setBalance(int accNum, float newBalance)
{
    int theIndex;

    theIndex = getAccountIndex(accNum);
    balanceList[theIndex] = newBalance;
    return 0;
}

int debitFunds(int acctNum, float ammToSub)
{
    int index;
    float accBal;
    float newBal;
    int setBal;

    index = getAccountIndex(acctNum);
    if(index != -1)
    {
        accBal = getBalance(acctNum);
        newBal = accBal-ammToSub;
        setBal = setBalance(acctNum, newBal);
        return 0;
    }
    else
    {
        return -6; //An arbitrary number not equal to 0.
    }
}
int showAllAccountNum(void)
{
    int i = 0;
    for(i = 0; i<sizeof(accountList)/sizeof(int); ++i)
    {
        int j;
        j = accountList[i];
        printf("%d\n", j);
    }
    return 0;
}

float showOtherAccountBal(int accountNum)
{
    int index = getAccountIndex(accountNum);
    float bal = balanceList[index];
    return bal;
}
