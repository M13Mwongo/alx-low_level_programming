#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of file to be read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed | 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nrd = 0;

	if (filename == NULL)
	{
		return (0);
	}
	char *buff = malloc(sizeof(size_t) * letters);

	if (buff ==NULL)
	{
		return 0;
	}
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return 0;
	}
	nrd = fread(buff, sizeof(char), letters, fp);
	if (nrd <= 0)
	{
		fclose(fp);
		return 0;
	}
	buff[nrd] = '\0';
	if (fwrite(buff, sizeof(char), nrd, stdout) != nrd)
	{
		fclose(fp);
		return 0;
	}
	free(buff);
	fclose(fp);
	return (nrd);
}
