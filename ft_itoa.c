#include "libft.h"

static	size_t	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	len = ft_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		len--;
		str[len] = '0' + nb % 10;
		nb = nb / 10;
	}
	return (str);
}
