#include "main.h"
#include <stdio.h>

/** _memcpy function takes the pointer to its dest src and number
 * char* src: is tge source memory of the pointer
 * @n; is the number of bytes 
 * Return: to dest 
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	char *dest_ptr = dest;
	char *src_ptr = src;
       	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	
	return dest;
}


