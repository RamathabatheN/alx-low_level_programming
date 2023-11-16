#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int on, war, leg = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (leg = 0; text_content[leg];)
leg++;
}
on = open(filename, O_WRONLY | O_APPEND);
war = write(on, text_content, leg);
if (on == -1 || war == -1)
return (-1);
close(on);
return (1);
}
