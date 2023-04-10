#include "main.h"
#include <stdio.h>

void posix_msg(int f_f, int f_t, char *argv[]);

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
	posix_msg(f_f, f_t, argv);
	while (x == 1024)
	{
		x = read(f_f, siz_char, 1024);
		if (x < 0)
			posix_msg(-98, 0, argv);
		fw = write(f_t, siz_char, x);
		if (fw < 0)
			posix_msg(0, -99, argv);
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

/**
 * posix_msg - check the cp file_from file_to
 * @f_f: file_from
 * @f_t: file_to
 * @argv: arguments vector
 * Return: 0
 */

void posix_msg(int f_f, int f_t, char *argv[])
{
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
}
