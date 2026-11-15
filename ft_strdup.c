#include "libft.h"

char *strdup(const char *s);
{
	char *copy;
	int	i;

	i = 0;
	copy = malloc(sizeof(char) * (strlen(s) + 1));
	if (copy)
		return (NULL);
	
}