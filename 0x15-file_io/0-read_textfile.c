#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file with a given file name
* @filename: name of the text file being read
* @letters: no of letters to be read
* Description - a func. that reads a txt-file & print to stdout
* Return: actual no, NULL or 0 based on outcome
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
