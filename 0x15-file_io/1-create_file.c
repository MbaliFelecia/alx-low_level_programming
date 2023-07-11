#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writen in file
 *
 * Return: 1 if it is successful. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fn, nletters, cwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	cwr = write(fn, text_content, nletters);

	if (cwr == -1)
		return (-1);

	close(fn);

	return (1);
}
