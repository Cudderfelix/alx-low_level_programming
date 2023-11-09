#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* checks97 - runs a check for the valid no of arguments
* @argchar: checks for number of arguments.
*
* Return: void
*/
void checks97(int argchar)
{
	if (argchar != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * checks98 - checks that file_from exists and can be read
 * @check: checks if this true or false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptoer of file_to, or -1
 *
 * Return: void
 */
void checks98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if(fd_to != -1)
			close(fd_to);
		exit(98);
	}
 }

/**
 * checks99 - runs a check to validate that file_to was created and/or can be appended to
 * @check: checks if true or false
 * @filetag: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_dest: file descriptor of file_to, or -1
 *
 * Return: void
 */
void checks99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * checks100 - runs a check to validate that file descriptors were terminated properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
 void checks100(int check, int fd)
 {
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Duplicates  the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main (int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	checks97(argchar);
	fd_from = open(argb[1], 0_RDONLY);
	checks98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], 0_WRONLY | 0_CREAT | 0_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		checks98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if(lenw != lenr)
			lenw = -1;
		checks99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	checks100(close_to, fd_to);
	checks100(close_from, fd_from);
	return(0);
}
