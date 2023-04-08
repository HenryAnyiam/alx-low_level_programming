#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
  *append_text_to_file - append text to a file
  *@filename: name of file
  *@text_content: text to write to file
  *)
  *Return: 1 on success, else -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	int len, check;

	if ((fd < 0) || (filename == NULL))
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = 0;
	while (text_content[len] != '\0')
		len++;
	check = write(fd, text_content, len);
	if (check < 0)
		return (-1);
	return (1);
}
