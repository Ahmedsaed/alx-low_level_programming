#include"main.h"

/**
* _strlen: returns the length of a string
* @c*: array of chars
* Return: int - length of array
*/

int _strlen(char *s)
{
	int n = 0;
	char ch = ' ';
	while(ch != '\0')
		ch = s[++n];
	return n;
}
