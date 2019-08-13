#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * get_length - returns lengt
 * @str: str to be evaluated
 *
 * Return: length of str
 */
int get_length(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		continue;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of file to crete
 * @text_content: string to write
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == 0)
		return (-1);
	if (text_content == 0)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	len = get_length(text_content);
	if (write(fd, text_content, len) == -1)
		return (-1);
	close(fd);
	return (1);
}
