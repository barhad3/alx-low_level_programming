#include "main.h"

/**
 * _sqrt - computes the square root of a number
 * @n: the number to compute the square root of
 * @i: the current guess
 *
 * Return: the square root of @n, or -1 if @n has no natural square root
 */
int _sqrt(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of @n, or -1 if @n has no natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt(n, 0));
}
