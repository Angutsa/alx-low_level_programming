#include "main.h"

/**
  * read_textfile - reads a text file and prints it to POSIX stdout
  * @filename: name of file to read
  * @letters: number of letters to read and print
  * Return: Returns the number of letters it could read and print
  * 0 if the file cannot be opened or read or filename is NULL
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, rd, wr;

	if (filename == NULL && *filename == '\0')
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr != rd || wr == -1)
		return (0);

	close(fd);
	free(buffer);

	return (wr);
}
