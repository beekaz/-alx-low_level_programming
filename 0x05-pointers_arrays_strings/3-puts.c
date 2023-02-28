#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
int d;
for (d = 0; str[d] != '\0'; d++)
{
_putchar(str[d]);
}
_putchar('\n');
}
