#include "main.h"

/**
* _strncpy - copy n bytes from source string to destination string
*
* @dest: destination string
* @src: source string
* @n: bytes to copy
*
* Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
			break;

		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (tmp);
}
