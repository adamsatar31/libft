/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:03:05 by asatar            #+#    #+#             */
/*   Updated: 2026/11/20 17:30:51 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ptr = malloc(i + j + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, i + 1);
	ft_strlcat(ptr, s2, i + j + 1);
	return (ptr);
}
