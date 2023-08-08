#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - a  function that appends text at the end of a file.
 * @filename: pointer to the fie name
 * @text_content: string being appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open, file_write, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_open = open(filename, O_WRONLY | O_APPEND);
	file_write = write(file_open, text_content, len);

	if (file_open == -1 || file_write == -1)
		return (-1);

	close(file_open);
	return (1);
}
