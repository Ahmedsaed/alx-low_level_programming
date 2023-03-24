#include "variadic_functions.h"

/**
 * print_all - prints pararmeters
 *
 * @format: type of parameters
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list parms;
	int i, flag;
	char *str;

	va_start(parms, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(parms, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(parms, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(parms, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(parms, char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
	}
	printf("\n");
	va_end(parms);
}
