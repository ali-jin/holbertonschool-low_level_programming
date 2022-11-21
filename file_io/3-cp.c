#include "main.h"

/**
 * _close - close file
 * @file: file derscriptor
 *
 */
void _close(int file)
{
	int c = close(file);

	if (c == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * error_98 - check if file exist or can be read
 * @val: file derscriptor
 * @file: file name
 *
 */
void error_98(int val, char *file)
{
	if (val == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: number of argument(s)
 * @av: list of argument(s)
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd, fd2, rd, wt;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd = 1024;

	error_98(fd, av[1]);
	error_98(rd, av[1]);

	if (fd2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (rd == 1024)
	{
		rd = read(fd, buffer, 1024);
		error_98(fd, av[1]);
		error_98(rd, av[1]);
		wt = write(fd2, buffer, rd);
		if (wt == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	_close(fd);
	_close(fd2);
	return (0);
}
