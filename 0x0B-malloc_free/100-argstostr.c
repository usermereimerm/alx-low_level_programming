#include "main.h"

/**
 * argstostr - conctenates all arguments of the program
 * @ac: number of arguments passed
 * @av: array of pointers to arguments
 * Return: NULL if ac or av is 0 otherwise pointer
 * to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];
		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
