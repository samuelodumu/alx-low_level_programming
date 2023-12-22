#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to read text from
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	long unsigned int i;

	if (filename == NULL)
		return (0);

	fp = fopen("filename", "r");

	for (i = 0; i < letters; i++)
	{
		_putchar(fgetc(fp));
		fp++;
	}
	
	fclose(fp);
	return (i);
}
