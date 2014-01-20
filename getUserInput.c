#include <stdio.h>
#include <ctype.h> //Added to avoid weird pointer errors.

#define SCREEN_HEIGHT 80    // Number of newlines to print out
#define MAXLINE 100         // Maximum user input characters

// Function prototypes
double readUserInput(void);
static double atof(char s[]);   //changed back to static
static int getline(char s[], int lim);

double readUserInput(void)
{
    float number;
    char line[MAXLINE];

    getline(line,MAXLINE);
    number = atof(line);
    return number;
}

/* atof: convert string s to double */
static double atof(char s[])    //Changed back to static
{
    double val, power;
    int i, sign;

    for( i=0; isspace(s[i]); i++)   /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;

    if( s[i] == '+' || s[i] == '-')
        i++;
    for( val=0.0; isdigit(s[i]);i++)
        val = 10.0 * val + (s[i]-'0');
    if( s[i] =='.')
        i++;
    for( power=1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i]-'0');
        power *= 10.0;
    }

    return sign * val/power;
}

/* getline: get line into s, return length */
static int getline(char s[], int lim)
{
    int c,i;
    i=0;

    while( --lim > 0 && (c=getchar()) != EOF && c!= '\n')
    {
        s[i++] = c;
    }

    if(c == '\n')
    {
        s[i++] = c;
    }

    s[i] = '\0';

    return i;
}
