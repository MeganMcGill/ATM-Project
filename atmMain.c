#include "atmMainHeader.h"

int main()
{
    printf("Please enter your account number: ");   // Get the persons account number (like putting in a debit card)
    int accountNumber = readUserInput();    //Calls getline and atof from getUserInput to collect the account number.static int getAccountIndex(int acctNum)
    int accountIndex = accountExists(accountNumber); //Calls the accountAccess program to find index of account number (to see if it is a valid account number)

    if(accountIndex==-1)
    {
        printError(-12);
        return -5;
    }
    else
    {
		// Print the Menu Options
        displayMenu();

        //Land of 10,000 variables... or something like that.
        int option;
        float balance;
        int accountTwo;
        float ammToTrans;
        int transComplete;
        float balanceOfTransfer;
        float balanceOfSender;
        int toWithdraw;
        int dispensed;
        float currentInterstRate;
        float newRate;
        float nowRate;
        float addingInterest;
        float withInterest;
        float ammount;
        int act;
        int money;
        int a;
        float result;
        int choice;
        int exists;


		do {
		    option = readUserInput(); //Calls getline and atof from getUserInput
		    displayMenu();

		    switch(option)
		    {
		        case 1: //check current balance
                    balance = checkBalance(accountNumber);
                    printf("\nYour Balance: %.2f", balance);
                    break;
		        case 2: //transfer funds
                    printf("\nPlease enter an account to transfer funds to.\t");
                    accountTwo = readUserInput();
                    printf("\nAmmount to transfer:\t");
                    ammToTrans = readUserInput();
                    transComplete = transferFunds(accountNumber, accountTwo, ammToTrans);
                    balanceOfTransfer = checkBalance(accountTwo);
                    balanceOfSender = checkBalance(accountNumber);

                    if(transComplete == 0)
                    {
                        printf("\nTransfer complete!\n");                     //Printing out the transfer funds
                        printf("\nYour Account Balance:%.2f\nOther Account Balance:%.2f", balanceOfSender , balanceOfTransfer);
                    }
                    else if(transComplete == -9)
                    {
                        printError(-12); //An invalid account number was entered. Transfer was incomplete.
                    }
                    else
                    {
                        printError(-11); //Will occur if insufficient funds.
                    }
                    break;
		        case 3: //withdraw cash
                    printf("\n\nPlease enter ammount to withdraw...\n");
                    toWithdraw = readUserInput();
                    dispensed = withdrawCash(accountNumber, toWithdraw);
                    printf("\nDispensing Cash...\n");
                    if(dispensed==0)
                    {
                        printf("Cash dispensing complete!");
                    }
                    else
                    {
                        printError(-11); //Insufficient funds message
                    }
                    break;
		        case 4: //deposit money
                    printf("\nEnter account to deposit funds into: ");
                    act = readUserInput();
                    printf("\nEnter a Deposit Ammount: ");
                    ammount = readUserInput();
                    money = depositMoney(act, ammount);
                    if(money == 0)
                    {
                        printf("%.2f has been deposited to account %d.", ammount, act);
                        break;
                    }
                    else
                    {
                        printf("Unsucessful deposit.");
                    }
                    break;
		        case 5: //add interest to account [FIX THIS ONE]
                    withInterest = addInterestToAccount(accountNumber);
                    if (withInterest == 0)
                    {
                        addingInterest = checkBalance(accountNumber);
                        printf("\nYour balance with interest is:\t%.2f", addingInterest);
                    }
                    break;
		        case 6: //set current interest rate
                    printf("\nPlease enter new interest rate ammount:\t");
                    newRate = readUserInput();
                    setInterestRate(newRate);
                    nowRate = getInterestRate();
                    printf("New Interest Rate: %.2f", nowRate);
                    break;
		        case 7: //show current interest rate
                    currentInterstRate = getInterestRate();
                    printf("\nCurrent Interest Rate: %.2f%%", currentInterstRate);
                    break;
		        case 8: //show all account numbers
                    printf("\nall current account numbers:\n");
                    a = showAllAccountNum();
                    break;
		        case 9: //show other account balance
                    printf("\nPlease enter an account number to view balance:\t");
                    choice = readUserInput();
                    exists = accountExists(choice);
                    if(exists!=-1)
                    {
                        result = showOtherAccountBal(choice);
                        printf("Current Balance of %d is %.2f", choice, result);
                    }
                    else
                    {
                        printError(-12);
                    }
		        break;
		        case 10: //exit
                    return 0;
                    break;
		        default:
                    continue;
		    }

            printf("\n\nPRESS ENTER TO CONTINUE.");
		}while(option!=10);
    }


}
