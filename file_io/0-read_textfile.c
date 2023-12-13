#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include "main.h"
/**
 * read_textfile - Something useful
 * @filename: Something more useful
 * @letters: Something more useful
 *
 * Return: Something much more useful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, zor, zro;
	char *str = malloc(letters);

	if (filename == NULL || str == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	zor = read(fd, str, letters);
	zro = write(STDOUT_FILENO, str, zor);
	close(fd);
	if (zro == -1)
	{
		return (0);
	}
	return (zro);
}
