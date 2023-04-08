#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  *read_textfile - reads from a text file and print it to stdout
  *@filename: file name
  *@letters: length to read and print
  *)
  *Return: length printed or 0 if error
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	int len;
	char *buf = malloc(sizeof(char) * (letters + 1));

	if ((fd < 0) || filename == NULL)
		return (0);
	len = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, len);
	close(fd);
	free(buf);
	if (len == -1)
		return (0);
	return (len);
}
