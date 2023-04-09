#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: string - filename
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	size_t n;
	char *buf = malloc(sizeof(char) * letters + 1);;

	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);
	buf[n] = '\0';

	write(STDOUT_FILENO, buf, n);

	return ((ssize_t)n);
}
