/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 17:34:27 by asatar            #+#    #+#             */
/*   Updated: 2026/11/26 20:17:39 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return(NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}


/* int	main(void)
{
	int		a;
	t_list	*lst;

	lst = ft_lstnew(5);
	printf("%d\n", lst->content);
	free(lst);
	return (0);
} */