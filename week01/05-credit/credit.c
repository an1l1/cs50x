#include <cs50.h>
#include <stdio.h>
#include <string.h>

int calc(int x);

int main(void)
{
    long num;
    char str[16];
    int len, mul = 0, sum = 0, x = 0, z = 0;

    num = get_long("Number: "); // prompts the user
    sprintf(str, "%ld", num);   // makes num a string

    len = strlen(str); // gets string lenght

    if (len % 2 == 0) // if the entry lenght is even
    {
        for (int ind = 0; ind < len; ind++) // gets the string index
        {
            if (ind % 2 == 0) // if the index is even
            {
                x = str[ind] - '0';
                mul += calc(x);
            }
            else // if the index is odd
            {
                x = str[ind] - '0';
                sum += x;
            }
        }
    }
    else // if the entry lenght is odd
    {
        for (int ind = 0; ind < len; ind++) 
        {
            if (ind % 2 != 0) // if the index is odd
            {
                x = str[ind] - '0';
                mul += calc(x);
            }
            else // if the index is even
            {
                x = str[ind] - '0';
                sum += x;
            }
        }
    }
    sum += mul;

    if (len == 15) // checks and prints if invalid, amex, mastercard or visa
    {
        if ((str[0] - '0') == 3)
        {
            if ((str[1] - '0') == 4 || (str[1] - '0') == 7)
            {
                printf("AMEX\n");
                z++;
            }
        }
    }
    if (len == 16)
    {
        if ((str[0] - '0') == 5)
        {
            if ((str[1] - '0') >= 1 && (str[1] - '0') <= 5)
            {
                printf("MASTERCARD\n");
                z++;
            }
        }
    }
    if (len == 13 || len == 16)
    {
        if ((str[0] - '0') == 4)
        {
            printf("VISA\n");
            z++;
        }
    }
    if (sum % 10 != 0 || z == 0) 
    {
        printf("INVALID\n");
    }
}

int calc(int x) // multiplies by 2 and sums the products' digits
{
    int y;

    if ((x * 2) > 9)
    {
        y = (x * 2) % 10; // last digit
        x = (x * 2) / 10; // first digit
    }
    else
    {
        x = x * 2;
        y = 0;
    }
    return x + y;
}
