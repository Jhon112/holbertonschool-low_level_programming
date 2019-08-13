#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of file to be read
 * @letters: number of bytes to read
 *
 * Return: bytes it can read and print
 */
ssize_t read_textfile(char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read;

	if (filename == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == 0)
		return (0);

	bytes_read = read(fd, buf, letters);
	if (write(STDOUT_FILENO, buf, bytes_read) != bytes_read)
		return (0);

	close(fd);
	free(buf);
	return (bytes_read);
}
