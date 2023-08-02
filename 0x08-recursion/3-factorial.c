#include "main.h"
/**
 *factorial - returns the factorial of a given number.
 *@n: the number to calculate the factorial
 *Return: returns an integer
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}