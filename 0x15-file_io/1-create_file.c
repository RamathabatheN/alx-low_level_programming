#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int fix, war, leg = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (leg = 0; text_content[leg];)
leg++;
}
fix = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
war = write(fix, text_content, leg);
if (fix == -1 || war == -1)
return (-1);
close(fix);
return (1);
}
