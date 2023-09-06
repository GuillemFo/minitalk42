/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:30:06 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/06 17:30:38 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*adrei;
	t_list	*tmp;

	adrei = malloc(sizeof(t_list));
	if (!adrei || !lst)
		return (NULL);
	tmp = adrei;
	while (lst)
	{
		tmp->content = f(lst->content);
		lst = lst->next;
		if (lst)
		{
			tmp->next = malloc (sizeof(t_list));
			if (!tmp->next)
			{
				ft_lstclear(&adrei, del);
				return (NULL);
			}
			tmp = tmp->next;
		}
		else
			tmp->next = NULL;
	}
	return (adrei);
}
