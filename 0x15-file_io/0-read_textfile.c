#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr, num_char;
	char *temp;
	int fl;

	if (!filename)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
	{
		close(fl);
		return (0);
	}

	temp = malloc(letters + 1);
	if (!temp)
	{
		close(fl);
		free(temp);
		return (0);
	}
	num_char = read(fl, temp, letters);
	if (num_char == -1)
	{
		close(fl);
		free(temp);
		return (0);
	}
	temp[letters] = '\0';
	wr = write(STDOUT_FILENO, temp, num_char);
	if (wr == -1 || num_char != wr)
	{
		close(fl);
		free(temp);
		return (0);
		
	}

	close(fl);
	free(temp);
	return (wr);
}
