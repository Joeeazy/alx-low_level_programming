#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: A pointer to the file being created
 * @text_content: A pointer to a string being written on the file
 * Return: function failure -1 else 1 for success
 */
int create_file(const char *filename, char *text_content)
{
	int file, fwrite, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fwrite = write(file, text_content, i);
	if (file == -1 || fwrite == -1)
		return (-1);
	close(file);
	return (1);
}
