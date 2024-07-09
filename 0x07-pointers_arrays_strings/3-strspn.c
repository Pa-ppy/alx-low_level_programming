#include "main.h"

/**
 * _strspn - Gets the length of a prefix
 * @s: Pointer to the initial segment
 * @accept: Pointer to the accepted byte
 *
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}

	return (count);
}
