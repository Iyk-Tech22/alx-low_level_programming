#ifndef MAIH_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#define BUFSIZE 1204
ssize_t read_textfile(const char *, size_t);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif
