#include "main.h"
#include <stdio.h>

/**
 * _strchr:Is a pointer to the str and character
 *char* s: the array pointer
 *@c: is thesearch character
 *Return: 0 if null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
