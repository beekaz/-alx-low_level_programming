#include "main.h"

/**
 * create_file - the function creates file
 * @filename:  is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file, length;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (length = 0; *(text_content + length) != '\0'; length++)
		;
	write(file, text_content, length);
	close(file);
	return (1);
}
