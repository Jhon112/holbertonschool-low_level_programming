#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(int);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif