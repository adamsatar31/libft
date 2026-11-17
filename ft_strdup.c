#include "libft.h"

char *strdup(const char *s);
{
	char *copy;
	int	i;

	i = 0;
	copy = malloc(sizeof(char) * (strlen(s) + 1));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}