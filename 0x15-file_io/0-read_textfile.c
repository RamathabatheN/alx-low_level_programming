#include "main.h"

/**
 * read_textfile - reads the text file and print its letters
 * @filename: filename
 * @letters: numbers of letters to be printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fat;
ssize_t nap, num;
char *buffet;
if (!filename)
return (0);
fat = open(filename, O_RDONLY);
if (fat == -1)
return (0);
buffet = malloc(sizeof(char) * (letters));
if (!buffet)
return (0);
nap = read(fat, buffet, letters);
num = write(STDOUT_FILENO, buffet, nap);
close(fat);
free(buffet);
return (num);
}
