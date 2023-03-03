#include "main.h"

/**
  *infinite_add - adds two numbers
  *@n1: first number
  *@n2: second number
  *@r: buffer to store result
  *@size_r: buffer size
  *)
  *Return: Final result
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int size1, size2, a, b;
        int rem, add, hold;

	hold = size_r;
        size1 = 0;
        while (n1[size1] != '\0')
                ++size1;
        size2 = 0;
        while (n2[size2] != '\0')
                ++size2;
        if (size1 > (size_r - 1) || size2 > (size_r - 1))
                r = 0;
        else
        {
                --size1;
                --size2;
                r[size_r] = '\0';
                --size_r;
                while ((size1 >= size2 && size1 < size_r - 1) || (size2 >= size1 && size2 < size_r - 1))
                {
                        r[size_r] = '\0';
                        --size_r;
                }
                rem = 0;
                while (size_r >= 0)
                {
                        if (size1 < 0 && size2 < 0 && rem == 1)
                        {
                                a = '0';
                                b = '0';
                        }
                        else if (size1 < 0)
                        {
                                a = '0';
                                b = n2[size2];
 				    size1 = 0;
                        }
                        else if (size2 < 0)
                        {
                                b = '0';
                                a = n1[size1];
 				    size2 = 0;
                        }
                        else
                        {
                                a = n1[size1];
                                b = n2[size2];
                        }
                        add = (a - '0') + (b - '0') + rem;
                        if (add > 9)
                        {
                                add = add % 10;
                                rem = 1;
                        }
                        else
                                rem = 0;
                        r[size_r] = add + '0
                        --size1;
                        --size2;
                        --size_r;
                }
		size1 = 0;
		while (r[size1] != '\0')
			++size1;
		++size1;
		if (size1 > hold)
			r = 0;
        }
        return (r);
}
