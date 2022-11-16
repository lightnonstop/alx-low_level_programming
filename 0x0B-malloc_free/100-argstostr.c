#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *argstostr(int ac, char **av)
{
	int i, j, sum = 0;

	for (i = 0; i < ac; i++)
	{
		while (*(av[i]))
		{
			sum++;
			av[i]++;
		}
	}

	char *a;
	
	a = malloc((ac + sum) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			a[i] = av[i][j];
		}
	}
	return (a);
}
int main(int ac, char *av[])
{
	char *s;
	
	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
