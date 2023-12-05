#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file with text content
 * @filename: the name of the file
 * @text_content: the text content of the file
 * Return: 1 if success, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
