#include "main.h"

/**
  *more_numbers - prints 1 to 14, 10 times
  */
void more_numbers(void)
{
	int i, j, k;

	k = 0;
	while (k <= 9)
	{
		for (j = '0'; j <= '1'; ++j)
		{
			for (i = '0'; i <= '9'; ++i)
			{
				if (j == '1' && i == '5')
					break;
				if (j != '0')
					_putchar(j);
				_putchar(i);
			}
		}
		++k;
		putchar('\n');
	}
}
