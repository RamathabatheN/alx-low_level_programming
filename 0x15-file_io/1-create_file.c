#include "main.h"

/**
 * create_file - creates a new file
 * @filename: filename
 * @text_content: content written on the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int fix;
int let;
int right;
if (!filename)
return (-1);
fix = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fix == -1)
return (-1);
if (!text_content)
text_content = "";
for (let = 0; text_content[let]; let++);
right = write(fix, text_content, let);
if (right == -1)
return (-1);
close(fix);
return (1);
}
