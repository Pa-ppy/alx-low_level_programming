#include <unistd.h>

/**
 * main - Entry point of the progam
 *
 * Return: Always 1 (failure)
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, message, sizeof(message) - 1);
	return (1);
}
