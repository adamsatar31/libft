/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 18:24:14 by asatar            #+#    #+#             */
/*   Updated: 2026/11/26 20:07:11 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	int		a;
	int		b;
	int		c;

	a = 1;
	b = 2;
	c = 3;
	list1 = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	list3 = malloc(sizeof(t_list));

	list1->content = &a;
	list1->next = list2;

	list2->content = &b;
	list2->next = list3;

	list3->content = &c;
	list3->next = NULL;
	printf("%d\n", ft_lstsize(list1));
	printf("%d\n", ft_lstsize(list1));
	free(list1);
	free(list2);
	free(list3);
	return (0);
}