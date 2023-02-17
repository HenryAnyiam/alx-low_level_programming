#include <stdio.h>

/**
  *main- prints digits 0-9
  *Returns: 0 to end main
  */
int main(void)
{
	int i;
	int n;

	n = '\n';
	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar(n);
	return (0);
}
