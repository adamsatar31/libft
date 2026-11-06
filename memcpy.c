/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:37:24 by asatar            #+#    #+#             */
/*   Updated: 2026/11/06 20:12:57 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t			i;
	
	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	i = 0;
	
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}