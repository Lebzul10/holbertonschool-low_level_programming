#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
/**
 * create_file - Something useful
 * @filename: Something more useful
 * @text_content: Something more useful
 *
 * Return: Something much more useful
 */
int hesen(int argc, char *argv[])
{
	int fd1, fd2, zor, zro;
	char *str = malloc(1024);
	if (argc != 3)
	{
		exit(97);
	}
	fd1 = open(argv[1], O_READONLY | O_CREAT);
	zor = read(fd1, str, 1024);
	close(fd);
	fd2 = open(argv[2], O_WRONLY | O_CREAT);
	zro = write(fd2, str, 1024);
	close(fd2);
	return (0);
	
}
