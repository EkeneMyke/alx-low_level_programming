#include "main.h"
#include <stdio.h>
/**
 *print_sign - prints +  when n is greater than 0
 *prints 0 when n is 0
 *and prints - when n is less than 0
 *
 *c: Character of the ASCII Code
 *
 *@n: Values are assigned to it
 *
 *Return: 1 when number is greater than 0,
 *0 when number equals 0 and
 *-1 when number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	putchar('\n');
}
