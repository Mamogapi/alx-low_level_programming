#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fw, fr;
	char *str;

	fp = open(filename, O_RDONLY);
	str = (char *)malloc(sizeof(char) * (letters));

	if (filename == NULL)
		return (0);
	if (str == NULL)
		return (0);

	fr = read(fp, str, letters);

	if (fp == NULL || fr == NULL)
		return (0);
	fw = write(STDOUT_FILENO, str, fr);

	if (fw == NULL || fw != fr)
		return (0);
	close(fp);
	free(str);

	return (fr);
}
