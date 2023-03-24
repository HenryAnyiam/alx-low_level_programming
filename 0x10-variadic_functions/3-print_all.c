#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_all - prints anything
  *@format: data type
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, check = 0;
	char *str;
	va_list d;

	va_start(d, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		switch (format[i])
		{
			case 'c':
				switch (check)
					case 1:
						printf(", ");
				check = 1;
				printf("%c", va_arg(d, int));
				break;
			case 'i':
				switch (check)
					case 1:
						printf(", ");
				check = 1;
				printf("%d", va_arg(d, int));
				break;
			case 'f':
				switch (check)
					case 1:
						printf(", ");
				check = 1;
				printf("%f", va_arg(d, double));
				break;
			case 's':
				switch (check)
					case 1:
						printf(", ");
				check = 1;
				str = va_arg(d, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
	}
	va_end(d);
	printf("\n");
}
