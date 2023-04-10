#include "main.h"

/**
 * append_text_to_file - Write a function that appends text at the end
 * of a file
 * @filename:  is the name of the file
 * @text_content: content of a file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, fw, x = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp < 0)
		return (-1);
	while (text_content[x] != '\0')
		x++;
	if (text_content != NULL)
	{
		fw = write(fp, text_content, x);

		if (fw < 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);

	return (1);

}
