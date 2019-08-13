#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: pointer to text to append
 *
 * Return: 1 if file exists, -1 otherwise
 */
int append_text_to_file(char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == 0)
		return (-1);
	if (text_content == 0)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		if (errno == ENOENT || errno == EROFS)
			return (-1);
	len = get_length(text_content);
	if (write(fd, text_content, len) == -1)
		return (-1);

	close(fd);
	return (1);
}
