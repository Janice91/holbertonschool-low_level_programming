#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len, w;

    if (!filename)
        return (-1);

    /* ouvrir le fichier uniquement en écriture et append */
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1); /* fichier n'existe pas ou pas de permission */

    if (!text_content)
    {
        close(fd);
        return (1); /* rien à ajouter mais fichier existe */
    }

    /* Calculer la longueur de text_content */
    for (len = 0; text_content[len]; len++)
        ;

    /* Écrire le contenu */
    w = write(fd, text_content, len);
    close(fd);

    if (w != len)
        return (-1);

    return (1);
}

