#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase using the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    for (c = 'A'; c <= 'Z'; c++)
    {
        putchar(c);
    }
    putchar('\n');
    return (0);
}
