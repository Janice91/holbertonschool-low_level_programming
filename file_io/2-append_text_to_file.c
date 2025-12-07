#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int i;
    ssize_t w;

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
    while (text_content[i] != '\0')
        i++;

    /* Écrire le texte à la fin du fichier */
    w = write(fd, text_content, i);
    if (w == -1 || w != i)
    {
        close(fd);  /* Toujours fermer le fichier même en cas d'erreur */
        return (-1);
    }

    close(fd);
    return (1);
}

