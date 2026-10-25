#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        // Prompt user for height
        height = get_int("Height: ");
    }
    while (height < 1); // Height must be a positive whole number

    // Print out the triangle - Triangle's height must be the height the user defined
    for (int i = 0; i < height; i++) // Make rows
    {

        for (int j = 0; j < height - 1 - i; j++) // Make columns - Print empty spaces
        {
            printf(" ");
        }

        for (int k = 1; k <= i + 1; k++) // Make columns - Print hashes
        {
            printf("#");
        }

        printf("\n");
    }
}