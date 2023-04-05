#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
    if (n < 0)
        return (-1);
    else if (n == 0)
        return (1);
    else
        return (n * factorial(n - 1));
}
