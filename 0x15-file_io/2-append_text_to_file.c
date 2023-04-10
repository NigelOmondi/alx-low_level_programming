#include "main.h"
/**
 * append_text_to_file - appends text to end of a file
 * @filename: the name of file to append text to
 * @text_content: the text to be appended to the file
 *
 * Return: 1 if file exists, -1 if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, lenth = 0, written;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[lenth])
			lenth++;

		written = write(fp, text_content, lenth);
		if (written == -1)
			return (-1);
	}

	close(fp);

	return (1);
}
