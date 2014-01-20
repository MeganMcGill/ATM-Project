#include <stdio.h>

//Function Prototypes
void printError(int errNo);


/* printError: print the corresponding error message */
void printError(int errNo)
{
    // Based on input, print appropriate error message
    switch(errNo)
    {
        case -11:   // Print error for insufficient funds
            printf("Insufficient funds.");
            break;

        case -12:   // Print error for a non-existant account
           printf("\nInvalid account number entered");
           break;

        case -13:   // Print a generic error for the menu switch block
        printf("\nInvalid Input. Please enter valid input.\n");
        break;

        default:    // Print a generic error for anything else calling this function
            printf("GENERIC ERROR MESSAGE\n");
            break;
    }
}
