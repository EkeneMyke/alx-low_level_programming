#include <stdio.h>
#include "main.h"
/**
 *main- Entry point
 *Description:Printing_alphabets in small letters
 *Return: Always o
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}