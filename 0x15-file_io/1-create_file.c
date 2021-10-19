#include "main.h"

/**
*create_file: a function that creates a file
*@filename: the name of the file to create
*@text_content: a NULL terminated string to write to the file
*Returns: 1 on success, -1 on fail.
*/
int create_file(const char *filename, char *text_content)
{
register int fd, w, len = 0;
if (!filename)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content)
{
while (text_content[len])
len++;
w = write(fd, text_content, len);
if (w == -1)
return (-1);
}
close(fd);
return (1);
}
