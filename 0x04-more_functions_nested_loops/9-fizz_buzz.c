#include <stdio.h>

/**
 * main - Prints multiples of 3, of 5, of 3 and 5 with Fizz, Buzz, FizzBuzz
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("Fizzbuzz\n");
		else if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}
	return (0);
}
