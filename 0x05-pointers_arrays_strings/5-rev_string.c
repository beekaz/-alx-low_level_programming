#include "main.h"
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{


int b , len;
char *begin = s;
char* end = s;
for (b =0; s[b] != '\0' && s[b + 1] != '\0'; b++)
{
end++;
}        
len = b +1;
        for ( b =0; b < len / 2; b++)
{
char u;
u = *end;
*end = *begin;
*begin = u;
begin++;
end--;
}
end [len + 1] = '\0';
}
