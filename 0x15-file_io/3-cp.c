#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 97 or 98  or 99 or 100
 */

int main(int argc, char **argv)
{
int fd_in, fd_out, n, m, size, count = 0;
char buffer[1024];

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
fd_in = open(argv[1], O_RDONLY);
if (fd_in == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

if (fd_out == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}
size = -1;
while (size != 0)
{
	size = read(fd_in, buffer, 1024);
	buffer[size] = '\0';
	count += write(fd_out, buffer, size);
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
	n = close(fd_in);
	check_close_error(n, fd_in);
	m = close(fd_out);
	check_close_error(m, fd_out);
	return (0);
}

/**
 * check_close_error - checks for errors
 * @err: return value
 * @fd: file descriptor
 * Return: nothing
 */
void check_close_error(int err, int fd)
{
if (err == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
}
