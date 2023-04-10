#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: content of a file
 * Return:  1 on success, -1 on failure2
 */

int create_file(const char *filename, char *text_content)
{
	int fp, fw, x = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp < 0)
		return (-1);
	while (text_content[x] != '\0')
		x++;
	fw = write(fp, text_content, x);

	if (fw < 0)
		return (-1);
	close(fp);

	return (1);
}
