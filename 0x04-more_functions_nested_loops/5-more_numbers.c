#include "main.h"
#include <stdio.h>

/**
 *more_numbers - prints numbers 0 t0 14 ten times
 *
 *Return: Always 0
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				putchar('1');
			putchar (y % 10 + '0');
		}
		putchar('\n');
	}
}
