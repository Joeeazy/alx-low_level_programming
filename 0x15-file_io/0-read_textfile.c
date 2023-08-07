#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - function that reads a text fileprints it to standard output.
 * @filename: pointer to the file
 * @letters: function argument where the number of letters to print is indicatd
 * Return: actual number of letters it could read and print else 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, file_read, file_write;
	char *total_size;

	total_size = malloc(sizeof(char) * letters);

	if (total_size == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	file_read = read(fo, total_size, letters);
	if (file_read == -1)
		return (0);
	file_write = write(STDOUT_FILENO, total_size, file_read);
	if (file_write == -1)
		return (0);
	close(fo);
	free(total_size);
	return (file_write);
}
