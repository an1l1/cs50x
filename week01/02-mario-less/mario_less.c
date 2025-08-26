#include <cs50.h>
#include <stdio.h>

void row(int bricks);
void spc(int spaces);

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
    }
}
void row(int bricks) // prints a row with (height) hashes
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
void spc(int spaces) // prints a row with (height) spaces
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}
