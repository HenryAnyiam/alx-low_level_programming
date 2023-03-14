#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - 2 dimensional array of integers
  *@width: Width
  *@height: Height
  *)
  *Return: Null or pointer
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * height);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	return (ar);
}
