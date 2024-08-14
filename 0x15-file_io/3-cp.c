#include "main.h"

#define BUFFER_SIZE 1024

void close_file(int var_file, const char *filename);
void print_error(const char *msg, const char *filename, int exit_code);

/**
 * main - Entry point for the cp program
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, or exit with appropriate error code
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t no_read, no_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		close_file(file_from, argv[1]);
		print_error("Error: Can't write to", argv[2], 99);
	}

	while ((no_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		no_written = write(file_to, buffer, no_read);
		if (no_written == -1 || no_written != no_read)
		{
			close_file(file_from, argv[1]);
			close_file(file_to, argv[2]);
			print_error("Error: Can't write to", argv[2], 99);
		}
	}

	if (no_read == -1)
	{
		close_file(file_from, argv[1]);
		close_file(file_to, argv[2]);
		print_error("Error: Can't read from file", argv[1], 98);
	}

	close_file(file_from, argv[1]);
	close_file(file_to, argv[2]);

	return (0);
}

/**
 * close_file - Closes a file descriptor amd handles error
 * @var_file: File descriptor to close
 * @filename: Name of file associated
 */
void close_file(int var_file, const char *filename)
{
	if (close(var_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close var_file %d\n", var_file);
		exit(100);
	}
}

/**
 * print_error - Prints an error message
 * @msg: Error message to print
 * @filename: Filename associated
 * @exit_code: The exit code
 */
void print_error(const char *msg, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(exit_code);
}
