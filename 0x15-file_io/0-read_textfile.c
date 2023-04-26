#include "main.h"

/**
 * read_textfile - read a file.
 * @filename: the file to read.
 * @letters: the number of chars to read
 * Description: read a file
 * section header: the header of this function is holberton.h
 * Return: this return the number of chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, _read, _write;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	f = open(filename, O_RDONLY, 600);
	if (f == -1)
	{
		free(buff);
		return (0);
	}
	_read = read(f, buff, letters);
	if (_read == -1)
	{
		free(buff);
		return (0);
	}

	_write = write(STDOUT_FILENO, buff, _read);
	if (_write == -1 || _write != _read)
	{
		return (0);
	}

	free(buff);
	close(f);
	return (_write);
}
