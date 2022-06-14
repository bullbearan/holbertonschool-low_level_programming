#include "main.h"
/**
 * create_file - check the code
 * @filename: parameter
 * @text_content: parameters
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[i])
		i++;
	write(file, text_content, i);
	close(file);
		return (1);
}
