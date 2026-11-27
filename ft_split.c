#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**free_all(char **arr, size_t count)
{
	while (count > 0)
	{
		count--;
		free(arr[count]);
	}
	free(arr);
	return (NULL);
}

static char	*word_dup(char const *src, size_t len)
{
	char	*word;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, src, len);
	word[len] = '\0';
	return (word);
}

static char	**fill_words(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	start;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[k] = word_dup(s + start, i - start);
			if (!arr[k])
				return (free_all(arr, k));
			k++;
		}
	}
	arr[k] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	return (fill_words(arr, s, c));
}

#include "stdio.h"
#include "stdlib.h"
#include "ft_memcpy.c"

int	main(void)
{

	char arr[]="asadugd";
	char* result[] = ft_split(arr, 'c');
	int i = 0;
	int count = 0;
	while(result[i])
	{
		count++;
		printf("%s", result[i]);
	}
	free_all(result, count);
	return (0);
}