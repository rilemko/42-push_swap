/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:50:50 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:36:41 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_get_higher(t_lst *lst, size_t lstlen)
{
	int	cursor;
	int	index;

	cursor = 0;
	index = -1;
	while (++index < (int) lstlen)
	{
		if (*((int *) ft_lstgetcontent(lst, index))
			> *((int *) ft_lstgetcontent(lst, cursor)))
		{
			cursor = index;
		}
	}
	return (cursor);
}

int	ft_stack_get_lower(t_lst *lst, size_t lstlen)
{
	int	cursor;
	int	index;

	cursor = 0;
	index = -1;
	while (++index < (int) lstlen)
	{
		if (*((int *) ft_lstgetcontent(lst, index))
			< *((int *) ft_lstgetcontent(lst, cursor)))
		{
			cursor = index;
		}
	}
	return (cursor);
}

int	ft_stack_is_higher(t_lst *lst, size_t pos)
{
	int	cursor;

	cursor = *((int *) ft_lstgetcontent(lst, pos));
	while (lst)
	{
		if (*((int *) lst->content) > cursor)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_stack_is_lower(t_lst *lst, size_t pos)
{
	int	cursor;

	cursor = *((int *) ft_lstgetcontent(lst, pos));
	while (lst)
	{
		if (*((int *) lst->content) < cursor)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_stack_is_sorted(t_lst *lst)
{
	while (lst)
	{
		if (lst->next
			&& *((int *)(lst->next)->content) < *((int *) lst->content))
			return (0);
		lst = lst->next;
	}
	return (1);
}
