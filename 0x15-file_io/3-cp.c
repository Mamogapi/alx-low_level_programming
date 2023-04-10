#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that copies the content of a file to another
 * file
 * @argc: integer variable
 * @argv: charactor array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f_f, f_t, err_mssg;
	char siz_char[1024];
	ssize_t fw, x = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	f_f = open(argv[1], O_RDONLY);
	f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (f_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (x == 1024)
	{
		x = read(f_f, siz_char, 1024);
		if (x < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fw = write(f_t, siz_char, x);
		if (fw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	err_mssg = close(f_f);
	if (err_mssg < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_t);
		exit(100);
	}
	err_mssg = close(f_t);
	if (err_mssg < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_t);
		exit(100);
	}
	return (0);
}
