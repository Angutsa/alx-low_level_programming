#include "main.h"

int copy_text(int fd_s, int fd_d, char *argv[]);

/**
  * main - copies one file to another
  * @argc: number of arguments
  * @argv: array of arguments supplied
  * Return: 0 on success or 97 if number of arguments is not right; 98 if
  * the file cannot be read or does not exist; 99 where the file cannot
  * be written to; 100 where the file cannot be closed.
  */
int main(int argc, char *argv[])
{
	int fd_s, fd_d, cp;

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd_s = open(argv[1], O_RDONLY);
	if (fd_s == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]),
				exit(98);

	fd_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_d == -1)
	{
		close(fd_s);
		dprintf(2, "Error: Can't write to %s\n", argv[2]),
				exit(99);
	}

	cp = copy_text(fd_s, fd_d, argv);

	if (close(fd_s) == -1)
	{
		close(fd_d);
		dprintf(2, "Error: Can't close fd %d\n", fd_s), exit(100);
	}

	if (close(fd_d) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_d), exit(100);

	return (cp);
}

/**
  * copy_text - copies text contents from fd_s to fd_d
  * @fd_s: file descriptor for source file
  * @fd_d: file descriptor for destination file
  * @argv: array of arguments supplied at command invocation
  * Return: 0 on success or 98 if fd_s can't be read, 99 if fd_d can't
  * be written to.
  */
int copy_text(int fd_s, int fd_d, char *argv[])
{
	char buffer[1024];
	int rd, wr;

	do {
		rd = read(fd_s, buffer, 1024);
		if (rd == -1)
		{
			close(fd_d);
			close(fd_s);
			dprintf(2, "Error: Can't read from file %s\n",
					argv[1]), exit(98);
		}

		wr = write(fd_d, buffer, rd);
		if (wr == -1)
		{
			close(fd_s);
			close(fd_d);
			dprintf(2, "Error: Can't write to %s\n", argv[2]),
					exit(99);
		}
	} while (rd == 1024);
	return (0);
}
