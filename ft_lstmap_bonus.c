/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:38:55 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 21:15:33 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*o;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	l = NULL;
	while (lst)
	{
		cont = f(lst->content);
		o = ft_lstnew(cont);
		if (!o)
		{
			ft_lstclear(&l, del);
			del(cont);
			return (NULL);
		}
		ft_lstadd_back(&l, o);
		lst = lst->next;
	}
	return (l);
}
