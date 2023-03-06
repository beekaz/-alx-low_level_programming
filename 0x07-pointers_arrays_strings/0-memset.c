#include "main.h"
#include <stdio.h>

/**char_memset: Is a function that takes a=in a pointerto fill file
 * char* s: is an array pointer
 * char b: is the constant byte which is the value
 * @n: is the number of the byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
       i = 0;
	if (i >= 0)
		{
			while (n--)
    {
	    *s++ = b;
	    _memset(s, b, *s);
    }
		}
    return s;
}

