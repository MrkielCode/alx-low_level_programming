#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - to print all format
 * @format: input type
 * * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sp = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, (char) va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
