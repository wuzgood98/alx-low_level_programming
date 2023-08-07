#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file.
 * @text_content: content to add to the file.
 *
 * Return: 1 on success, -1 on failure, -1 if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;
	mode_t mode = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
