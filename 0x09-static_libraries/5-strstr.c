#include "main.h"

/**
  *_strstr - locates a substring
  *@haystack: string to search
  *@needle: substring to locate
  *)
  *Return: substring
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (*(needle + i) != '\0')
		++i;
	--i;
	while (*haystack != '\0')
	{
		for (j = 0; j <= i; ++j)
		{
			if (*(haystack + j) != *(needle + j))
				break;
			if (j == i)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
