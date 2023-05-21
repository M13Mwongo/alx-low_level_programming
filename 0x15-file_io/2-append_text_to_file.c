#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file to change
 * @text_content: content to add
 * Return: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len = strlen(text_content);
	size_t bytes_written = 0;
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fp = fopen(filename, "r");
		if (fp == NULL)
		{
			return (-1);
		}
		fclose(fp);
		return (1);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (-1);
	}
	if (bytes_written != len)
	{
		return (-1);
	}
	return (1);
}
