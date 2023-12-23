#include "main.h"

/**
 * create_file - creates a file
 * Description: The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty filei
 * 
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	char *buffer;

	if (filename == NULL)
		return (-1);

	int fd = open("filename", 0_RDWR | O_CREAT | O_TRUNK, S_IRUSER | S_IWUSER);
	if (text_content == NULL)
		return (1);
	else
	{
		write(
