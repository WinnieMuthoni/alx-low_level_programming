#include <stdlib.h>
#include <time.h>
#include <stdio.h>y

/**
 * main - Entry point
 *
 * Description: This program generates a random number and prints its last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    srand(time(0)); /* Seed rand() function with current time. */
    n = rand() - RAND_MAX / 2; /* Generate random number and assign it to n. */

    printf("Last digit of %d is ", n);

    if (n % 10 > 5) /* Check if last digit is greater than 5. */
    {
        printf("%d and is greater than 5\n", n % 10);
    }
    else if (n % 10 == 0) /* Check if last digit is 0. */
    {
        printf("%d and is 0\n", n % 10);
    }
    else /* Last digit is less than 6 and not 0. */
    {
        printf("%d and is less than 6 and not 0\n", n % 10);
    }

    return (0);
}