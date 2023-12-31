#include "main.h"
/**
 * append_text_to_file - appends text
 * @filename: pointer
 * @text_content: string
 * Return: - - 1 for fail, otherwise - 1
 */
int append_text_to_file(const char *filename,
		char *text_content)
{
	int x, y, r = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (r = 0; text_content[r];)
			r++;
	}
	x = open(filename, O_WRONLY |
			O_APPEND);
	y = write(x, text_content, r);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
