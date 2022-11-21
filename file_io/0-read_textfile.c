#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY), ch, wt;
	char *ptr = malloc(sizeof(char) * letters);

	if (ptr == NULL || filename == NULL)
		return (0);

	ch = read(fd, ptr, letters);
	wt = write(STDOUT_FILENO, ptr, ch);

	if (wt == -1)
		return (0);

	free(ptr);
	close(fd);
	return (wt);
}
