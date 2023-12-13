#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include "main.h"
/**
 * create_file - Something useful
 * @filename: Something more useful
 * @text_content: Something more useful
 *
 * Return: Something much more useful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, zor, zro;

	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_RDONLY | O_WRONLY | O_TRUNC, 0600);
	zor = strlen(text_content);
	zro = write(fd, text_content, zor);
	if (zro == -1 || filename == NULL)
	{
		return (-1);
	}
	return (1);
}
