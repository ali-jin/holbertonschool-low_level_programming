#include "main.h"

/**
 * _strlen - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 (Success) or -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600), len = 0, wt;

	if (filename == NULL || fd == -1)
		return (-1);

	if (text_content != NULL)
		len = _strlen(text_content);

	wt = write(fd, text_content, len);

	if (wt == -1)
		return (-1);

	close(fd);
	return (1);
}
