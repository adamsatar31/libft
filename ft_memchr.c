/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:06:10 by asatar            #+#    #+#             */
/*   Updated: 2026/11/24 01:48:30 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n);
{
	const unsigned char	*p;
	void				*r;
	size_t				i;
	
	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		r = (void *)&p[i];
		if (p[i] == (unsigned char)c)
			return (r);
		i++;
	}
	return (NULL);
}