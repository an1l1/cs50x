#include <cs50.h>
#include <stdio.h>

void row(int bricks);
void spc(int spaces);
void mid(int middle);

int main(void)
{
    int height;
    do // gets the user entry (between 1 and 8)
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++) // creates int i, while i is less than height, i adds one
    {
        spc(height - (i + 1));
        row(i + 1);
        mid(2);
        row(i + 1);
        printf("\n");
    }
}
void row(int bricks) // prints a row with (height) hashes
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}
void spc(int spaces) // prints a row with (height) spaces
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}
void mid(int middle) // prints a row with (2) spaces
{
    for (int i = 0; i < middle; i++)
    {
        printf(" ");
    }
}
