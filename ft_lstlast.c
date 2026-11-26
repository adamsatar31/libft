/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 18:53:31 by asatar            #+#    #+#             */
/*   Updated: 2026/11/26 20:28:30 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int main ()
{
	t_list	* l1;
	t_list	* l2;
	t_list	* l3;
	t_list *final;

	l1 = malloc(sizeof(t_list *));
	l2 = malloc(sizeof(t_list *));
	l3 = malloc(sizeof(t_list *));

	l1->content = 1;
	l1->next = l2;

	l2->content = 2;
	l2->next = l3;

	l3->content = 3;
	l3->next = NULL;

	final = malloc(sizeof(t_list *));
	printf("%d", l1->next->next->next->content);

	
}