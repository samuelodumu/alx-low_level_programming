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
	int file_des, read_bytes, written_bytes;
	char *buffer;
	unsigned long int i;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	
	file_des = open("filename", O_RDOONLY);
	if (file_des == -1)
		return (0);

	read_bytes = read(file_des, buffer, letters);
	if (read_bytes == -1)
		return (0);

	written_bytes = write(STDOUT_FILENO, buffer, bytes_read);
	if (written_bytes == -1)
		return (0);
	
	close(file_des);
	return (i);
}
