#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - prints the last digit of a given number
 *
 *n: input number as an integer
 *@int: int variable assigned as last digit
 *
 *Return: the last digit of a number
 */
int print_last_digit(int)
{
	int l;
	int n;

	l = n % 10;
	if (l < 0)
	{
		putchar(-l + 48);
		return (-l);
	}
	else
	{
		putchar(l + 48);
		return (l);
	}
}
