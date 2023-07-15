#include <stdio.h>
/**
 *main - Entry point
 *Description: Removing some alphabets
 *Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(0);
		n++;
	}
	putchar('\n');
	return (0);
}
