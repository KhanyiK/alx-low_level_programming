#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads text file and prints
 * the POSIX
 * @filename: text file
 * @letters: number of letters
 * Return: 0 for fail, otherwise NULL
 */
ssize_t read_textfile(const char *filename,
		size_t letters)
{
	char *x;
	ssize_t y;
	ssize_t z;
	ssize_t r;

	y = open(filename, O_RDONLY);

	if (y == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	r = read(y, x, letters);
	z = write(STDOUT_FILENO, x, r);

	free(x);
	close(y);
	return (z);
}
