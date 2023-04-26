#include "main.h"
/**
 * main - copy a file.
 * @argc: the number of args
 * @argv: the Args.
 * Description: copy a file
  * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
	int srce_fd, destn_fd;
	int _read, _close_srce, _close_destn;
	char buff[1024];

	if (argc > 3 || argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n");
		exit(97);
	}
	srce_fd = open(*(argv + 1), O_RDONLY);
	if (srce_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", *(argv + 1));
		exit(98);
	}
	destn_fd = open(*(argv + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((_read = read(srce_fd, buffer, 1024)) > 0)
	{
		if (destn_fd == -1 || (write(destn_fd, buffer, _read) != _read))
		{
			dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", *(argv + 2));
			exit(99);
		}
	}
	if (_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", *(argv + 1));
		exit(98);
	}
	_close_srce = close(srce_fd);
	if (_close_srce < 0)
		dprintf(STDERR_FILENO, "Error: Cannot close fd %i\n", srce_fd), exit(100);
	_close_destn = close(destn_fd);
	if (_close_destn < 0)
		dprintf(STDERR_FILENO, "Error: Cannot close fd %i\n", destn_fd), exit(100);
	return (0);
}
