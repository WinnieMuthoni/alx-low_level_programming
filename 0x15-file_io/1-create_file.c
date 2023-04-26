#include "main.h"


/**
 *  create_file - create a file and write in it
 * @filename:file to be created
 * @text_content: content of the file created
 * Return: 1 or -1;
 */
int create_file(const char *filename, char *text_content)
{
	int f, lenn, wt;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn] != '\0'; lenn++)
		;
		wt = write(f, text_content, lenn);
	}
	if (wt == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}
