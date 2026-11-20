/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 17:38:33 by asatar            #+#    #+#             */
/*   Updated: 2026/11/20 19:23:07 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	sublen;
	char	*substring
	
	if (!s)
		return(NULL);
	slen = ft_strlen(s)
	if (start >= slen)
		return (ft_strdup(""))
	sublen = slen - start;
	if (len < sublen)
		sublen = len;
	substring = malloc(sizeof(char) * (sublen + 1));
	if (!substring)
		return (NULL);
	ft_memcpy(substring, s + start, sublen);
	substring[sublen] = '\0';
	return (substring);
}