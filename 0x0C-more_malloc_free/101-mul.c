#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_error - Prints "Error" and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - Checks if a string consists of only digits
 * @str: String to be checked
 *
 * Return: 1 if string is of only digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: Size of each element
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return ((void *)ptr);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number
 * @num2: Second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, n1, n2, *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result = _calloc(len1 + len2, sizeof(int));

	if (result == NULL)
		print_error();
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
	i = 0;

	while (i < (len1 + len2) && result[i] == 0)
		i++;
	if (i == len1 + len2)
		_putchar('0');
	else
		for (; i < (len1 + len2); i++)
			_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
}

/**
 * main - Entry point for the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();
	multiply(argv[1], argv[2]);

	return (0);
}
