#include <stdio.h>

#define SCREEN_HEIGHT 80    // Number of newlines to print out

/* displayMenu:  display the menu options */
void displayMenu(void)
{

    int j;
    // Clear out the screen contents
    for(j=0;j<=SCREEN_HEIGHT;j++)
        printf("\n");

    printf("1. Check Balance\n2. Transfer Funds\n3. Withdraw Cash\n4. Deposit Money\n5. Add Interest To Account\n");
    printf("6. Set Current Interest Rate\n7. Show Current Interest Rate\n8. Show All Account Numbers\n");
    printf("9. Show Other Account Balance\n10. Exit\nPlease Enter Option:");

}
