#include <stdio.h>
/**
 *main - Entry point
 *Description: Lowercase alphabets in reverse
 *Return: Always 0
 */
int main(void)
{
	int n = 123;

	while (n >= 97)
	{
		putchar(n - 1);
		n--;
	}
	putchar('\n');
	return (0);
}
