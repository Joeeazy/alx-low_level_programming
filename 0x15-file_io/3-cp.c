#include "main.h"
/**
 * c_file- function that closes the opened file
 * @file: The file
 */
void c_file(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * c_buffer - Allocation of memory for a buffer.
 * @file: The file buffer
 * Return: the new memory
 */
char *c_buffer(char *file)
{
	char *i;

	i = malloc(sizeof(char) * 1024);

	if (i == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (i);
}
/**
 * main - function thta performs the cp command
 * @argc: The arguments count
 * @argv: The arguments vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i, j, file_read, file_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = c_buffer(argv[2]);
	i = open(argv[1], O_RDONLY);
	file_read = read(i, buffer, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || file_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		file_write = write(j, buffer, file_read);
		if (j == -1 || file_write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		file_read = read(i, buffer, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);

	} while (file_read > 0);

	free(buffer);
	c_file(i);
	c_file(j);
	return (0);
}
