#include "main.h"

/**
  * create_file - creates a file
  *
  * @filename: name of the file to create
  * @text_content: NULL terminated string to write to the file
  *
  * Description: Function creates a file named *filename* and writes
  * the text_content to it. The created file will have r and w
  * permissions for the user. If the file exists, the permissions
  * remain the same and the content is truncated.
  *
  * Return: 1 on success and -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, wr;

	if (filename == NULL || *filename == '\0')
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC,	S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}

	wr = write(fd, text_content, (i + 1));
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
