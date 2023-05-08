#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *  read_textfile - reads a text file and prints it to the POSIX stdio
 *  @letters: numbers of letters it should read and print
 *  @filename:name of textfile read
 *  Return:  the actual number of letters it could read and if NULL , 0 or -1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_buffer;
	int file, read_file;

	if (!filename)
		return (0);

	print_buffer = malloc(sizeof(char) * letters);
	if (!print_buffer)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	read_file = read(file, print_buffer, letters);
	write(STDOUT_FILENO, print_buffer, read_file);

	close(file);
	free(print_buffer);
	return (read_file);
}
