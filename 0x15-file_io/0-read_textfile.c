#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: war  actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fix;
ssize_t war;
ssize_t tall;
fix = open(filename, O_RDONLY);
if (fix == -1)
return (0);
buf = malloc(sizeof(char) * letters);
tall = read(fix, buf, letters);
war = write(STDOUT_FILENO, buf, tall);
free(buf);
close(fix);
return (war);
}
