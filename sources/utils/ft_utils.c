/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:51:35 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 13:29:23 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_utils_count_moves(size_t pos, size_t lstlen, int abs_value)
{
	size_t	moves;

	moves = pos;
	if (moves == 0)
		return (0);
	if (abs_value && moves > lstlen / 2)
		moves = lstlen - moves;
	else if (!abs_value && moves >= lstlen / 2)
		moves = -(lstlen - moves);
	return (moves);
}

int	ft_utils_get_index(t_lst *lst, int content)
{
	int	index;

	if (!lst)
		return (-1);
	index = 0;
	while (lst)
	{
		if (*((int *) lst->content) == content)
			return (index);
		lst = lst->next;
		index++;
	}
	return (-1);
}

int	ft_utils_get_target(t_app *app, t_lst *lst, size_t pos)
{
	return (ft_utils_get_index(app->targets,
			*((int *) ft_lstgetcontent(lst, pos))));
}

int	ft_utils_is_placed(t_app *app, size_t index_a, size_t index_b)
{
	int	target;
	int	target_prev;
	int	target_next;

	target = ft_utils_get_target(app, app->stack_b, index_b);
	if (index_a == 0)
		target_prev = ft_utils_get_target(app, app->stack_a, app->size_a - 1);
	else
		target_prev = ft_utils_get_target(app, app->stack_a, index_a - 1);
	target_next = ft_utils_get_target(app, app->stack_a, index_a);
	if ((target != 0 && target != (app->count - 1)
			&& (target > target_prev && target < target_next))
		|| (target == 0 && target_next == ft_utils_get_target(app,
				app->stack_a, ft_stack_get_lower(app->stack_a, app->size_a)))
		|| (target == (app->count - 1) && target_prev == ft_utils_get_target(
				app, app->stack_a, ft_stack_get_higher(app->stack_a,
					app->size_a))))
		return (1);
	return (0);
}

int	ft_utils_lstcmp(t_lst *lst1, t_lst *lst2, size_t size)
{
	while (size--)
	{
		if (!lst1 || !lst2
			|| (*((int *) lst1->content) != *((int *) lst2->content)))
			return (1);
		lst1 = lst1->next;
		lst2 = lst2->next;
	}
	return (0);
}
