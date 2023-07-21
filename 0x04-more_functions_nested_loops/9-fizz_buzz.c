#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100
 *followed by a new line. But for numbers divisible by 3
 *print fizz and buzz for numbers divisible by 5.
 *fizzbuzz for numbers divisible by both 3 and 5
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 3 != 0 && n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
