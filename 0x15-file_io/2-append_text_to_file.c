#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int var_file, no_written, len = 0;

	if (filename == NULL)
		return (-1);

	var_file = open(filename, O_WRONLY | O_APPEND);
	if (var_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		no_written = write(var_file, text_content, len);
		if (no_written == -1 || no_written != len)
		{
			close(var_file);
			return (-1);
		}
	}

	close(var_file);
	return (1);
}
