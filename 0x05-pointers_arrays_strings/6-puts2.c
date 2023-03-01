#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 *         starting with the first character, followed by a new line.
 *
 * @s: This pointer point to a char or string
 *
 *
 */

void puts2(char *s)
{
int b;

for (b = 0; s[b] != '\0'; b++)
{
if (b % 2 == 0)
{
_putchar(s[b]);
}
}
_putchar('\n');
}
