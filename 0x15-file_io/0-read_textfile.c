#include "main.h"

/**
 * read_textfile - Reads a text file and prints to POSIX
 * @filename: The name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters read or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int var_file;
	ssize_t no_read, no_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	var_file = open(filename, O_RDONLY);
	if (var_file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(var_file);
		return (0);
	}

	no_read = read(var_file, buffer, letters);
	if (no_read == -1)
	{
		free(buffer);
		close(var_file);
		return (0);
	}

	no_written = write(STDOUT_FILENO, buffer, no_read);
	if (no_written == -1 || no_written != no_read)
	{
		free(buffer);
		close(var_file);
		return (0);
	}

	free(buffer);
	close(var_file);

	return (no_written);
}
