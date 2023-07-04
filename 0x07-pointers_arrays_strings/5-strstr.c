#include "main.h"

/**
 * _strstr -it finds the substring
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return:If the substring is located - a
 * pointer to the beginning of the located substring.
 * If the substring is located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
int num;

if (*needle == 0)
return (haystack);

while (*haystack)
{
num = 0;
if (haystack[num] == needle[num])
{
do {
if (needle[num + 1] == '\0')
return (haystack);
num++;
} while (haystack[num] == needle[num]);
}
haystack++;
}
return ('\0');
}
