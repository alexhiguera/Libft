/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:57:47 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/19 16:12:35 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*result_list;
	void	*set;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_node = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (new_node == NULL)
		{
			del(set);
			ft_lstclear(&result_list, (*del));
			return (result_list);
		}
		ft_lstadd_back(&result_list, new_node);
		lst = lst->next;
	}
	return (result_list);
}
