#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text at the end of file
 * @filename: filename
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int i;
    int w;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (!text_content)
    {
        close(fd);
        return (1);
    }

    /* Calculer la longueur du texte */
    i = 0;
    while (text_content[i])
        i++;

    w = write(fd, text_content, i);
    close(fd);

    if (w == -1 || w != i)
        return (-1);

    return (1);
}

