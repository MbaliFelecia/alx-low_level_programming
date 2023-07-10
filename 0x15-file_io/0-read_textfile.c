#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 *
 * Return: numbers of letters printed. It fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f,num_char;
	char *temp;
	int fl;

	if (!filename)
		return (0);

	fl = open(filename, 'r');

	if (fl == -1)
		return(0);

	temp = malloc(letters);
	if (!temp)
		return (0);
	
	num_char = read(f, temp, letters);
	f = write(STDOUT_FILENO, temp,num_char);

	close(fl);

	free(temp);

	return (num_char);
}
