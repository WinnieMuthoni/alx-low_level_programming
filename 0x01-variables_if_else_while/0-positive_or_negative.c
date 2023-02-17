#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    /* generate a random number and store it in n */
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* print the value of n */
    printf("Number: %d\n", n);

    /* check if n is positive, negative or zero, and print the result */
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);

    return (0);
}
