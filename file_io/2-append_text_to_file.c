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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 (Success) or -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND), wt, len = 0;

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
