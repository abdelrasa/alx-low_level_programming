#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: pointer file
 * @text_content: The string to add to the end of the file
 *
 * Return: If the function fails or the filename is NULL - -1.
 *         If the file does not exist and the user lacks write permissions - -1.
 *         Otherwise - 1 to indicate success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, text_length);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
