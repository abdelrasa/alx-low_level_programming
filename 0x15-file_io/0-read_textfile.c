#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints its content to STDOUT
 * @filename: The name of the text file to be read
 * @letters: The number of letters
 *
 * Return: On success, it returns the actual number of bytes read and
 * printed. On failure or if the filename is NULL, it returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor, bytes_read, bytes_written, total_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	total_written = bytes_written;

	free(buffer);
	close(file_descriptor);

	return (total_written);
}
