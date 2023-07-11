#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void cl_file(int fd);
char *creat_bfr(char *file);
/**
 * creat_bfr - buffer
 * @file: file name
 *
 * Return: to pointer
 */
char *creat_bfr(char *file)
{
	char *brf;

	brf = malloc(sizeof(char) * 1024);

	if (brf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (brf);
}

/**
 * cl_file - Closes file descriptors
 * @fd: file descriptor
 */
void cl_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program
 * @argc: total arguments
 * @argv: array
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *brf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	brf = creat_bfr(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, brf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(brf);
			exit(98);
		}

		w = write(to, brf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(brf);
			exit(99);
		}

		r = read(from, brf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(brf);
	cl_file(from);
	cl_file(to);

	return (0);
}
