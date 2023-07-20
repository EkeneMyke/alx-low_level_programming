#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints numbers from 0 t0 9
 *
 *Return: Alaways 0;
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
