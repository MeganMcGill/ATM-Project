#include <stdio.h>

//Function Prototypes
float getInterestRate(void);
int setInterestRate(float rate);
float computeInterest(float currentBal);


//Global static variable.
static float interestRate = .10; //What should this be initialized to???

float getInterestRate(void)
{
    return interestRate;
}
int setInterestRate(float rate)
{
    interestRate = rate;
    return 0;
}
float computeInterest(float currentBal)
{
    float currentRate = getInterestRate();
    float newBal = currentBal*currentRate;
    return newBal;
}
