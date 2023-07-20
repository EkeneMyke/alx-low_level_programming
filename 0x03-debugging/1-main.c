#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);

		/*No incremental declaration for i*/
	}

	printf("Infinite loop avoided! \\o/\n");
	
	/*Presence of special characters that cannot be assigned*/

	return (0);
}
