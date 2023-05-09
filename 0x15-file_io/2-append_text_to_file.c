#include "main.h"

/**
 * append_text_to_file - function that append text to the EOF
 * @filename: name of the file to be read
 * @text_content: the text that will appended
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, length;

	if (!file)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (length = 0; text_content[length] != '\0'; length++)
		;

	write(file, text_content, length);
	close(file);
	return (1);
}
