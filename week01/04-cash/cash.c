#include <cs50.h>
#include <stdio.h>

int calc(int owed, int x);

int main(void)
{
    int coin, owed, n = 0;
    do // gets a positive input
    {
        owed = get_int("Change owed: ");
    }
    while (owed < 0);

    int coin25, coin10, coin5, coin1 = 0; // total of coins for each value

    coin25 = calc(owed, 25);
    owed = owed - (coin25 * 25);
    coin10 = calc(owed, 10);
    owed = owed - (coin10 * 10);
    coin5 = calc(owed, 5);
    owed = owed - (coin5 * 5);
    coin1 = calc(owed, 1);
    owed = owed - (coin1 * 1);
    printf("%i\n", coin25 + coin10 + coin5 + coin1); // sums and prints the total value
}

int calc(int owed, int x)
{
    int coin = 0;
    if (owed >= x)
    {
        coin = owed / x; // coin receives the result of a division by the coin value
        owed = owed % x; // the value owed receives the remainder of this division
    }
    return coin;
}
