#include <stdio.h>

int     nmatch(char *s1, char *s2);

int		main(int c, char **v)
{
	if (c != 3)
	{
		printf("Argument error !\n");
		return (0);
	}
	printf("NMatch :: %d\n\n", nmatch(v[1], v[2]));
	return (0);
}
