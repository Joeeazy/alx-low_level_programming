#include "main.h"
#include <fcntl.h>
/**
 * create_file -  a function that creates a file.
 * @filename: pointer to the name of file being created
 * @text_content: pointer to the NULL string
 * Return: 1 success, -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_write, c_file, i;

	if (filename == NULL)
		return (-1);

	c_file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (c_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		file_write = write(c_file, text_content, i);

		if (file_write == -1)
			return (-1);
	}
	close(c_file);
	return (1);
}
