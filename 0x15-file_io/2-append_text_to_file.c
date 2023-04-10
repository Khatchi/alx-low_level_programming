#include "main.h"

/**
* append_text_to_file - a func. dt appends d specified txt 2 d given filename
* @filename: pointer to d file name
* @text_content: string to be added at the end of the file.
* Description: a function that appends text at d end of a file
* Return: -1 if fails/filename is NULL
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
