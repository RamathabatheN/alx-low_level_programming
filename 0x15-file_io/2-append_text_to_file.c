#include "main.h"

/**
 * append_text_to_file - appends a text at the end of the file
 * @filename: filename.
 * @text_content: added content to a text
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fix;
int let;
int run;
if (!filename)
return (-1);
fix = open(filename, O_WRONLY | O_APPEND);
if (fix == -1)
return (-1);
if (text_content)
{
for (let = 0; text_content[let]; let++);
run = write(fix, text_content, let);
if (run == -1)
return (-1);
}
close(fix);
return (1);
}
