#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn, nletters, cwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			cwr = write(fn, text_content, nletters);

		if (cwr == -1)
			return (-1);
	}

	close(fn);

	return (1);
}
