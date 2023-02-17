#include <stdio.h>

/**
  *main- print alphabets in reverse
  *Return: 0 to end main
  */
int main(void)
{
	char c;
	char n;

	c = 'z';
	n = '\n';
	while(c >= 'a')
	{
		putchar(c);
		--c;
	}
	putchar(n);
	return (0);
}
