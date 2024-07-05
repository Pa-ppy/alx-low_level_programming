#include "main.h"

/**
 * str_len - Calculates string length
 * @str: String to be measured
 *
 * Return: Length of the string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * reverse_string - Reverses a string
 * @str: String to be reversed
 */
void reverse_string(char *str)
{
	int len = str_len(str);
	int i, j;
	char temp;

	for (i = 0; j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Storing buffer
 * @size_r: Size of buffer
 *
 * Return: A pointer to the result or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = str_len(n1);
	int len2 = str_len(n2);
	int carry = 0, sum, i;
	int max_len = len1 > len2 ? len1 : len2;

	if (size_r <= max_len + 1)
		return (0);
	reverse_strings(n1);
	reverse_strings(n2);
	for (i = 0; i < max_len; i++)
	{
		int digit1 = i < len1 ? n1[i] - '0' : 0;
		int digit2 = i < len2 ? n2[i] - '0' : 0;

		sum = digit1 + digit2 + carry;
		r[i] = (sum % 10) + '0';
		carry = sum / 10;
	}
	if (carry)
		r[i++] = carry + '0';
	r[i] = '\0';
	reverse_string(r);

	return (r);
}
