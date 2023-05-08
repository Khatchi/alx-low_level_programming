#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - to read a text file and print to standard output
 * Description - a func that reads a textfile and print to stdout
 * @filename: a pointer to tyhe text being read
 * @letters: the counts/number of letters to be read
 * Return: actual no of bytes, 0 = fails, NULL = filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
