#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - Something useful
 * @filename: Something more useful
 * @text_content: Something more useful
 *
 * Return: Something much more useful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, zor, zro;

	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	zor = strlen(text_content);
	zro = write(fd, text_content, zor);
	close(fd);
	if (zro == -1 || filename == NULL)
	{
		return (-1);
	}
	return (1);
}
