/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_pa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:14:12 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:36:41 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_pa(t_app *app, int move, size_t repeat)
{
	t_lst	*list;

	while (repeat-- > 0)
	{
		if (app->size_b == 0)
			return ;
		ft_lstadd_front(&app->stack_a, ft_lstnew(
				ft_intdup(*((int *) ft_lstgetcontent(app->stack_b, 0)))));
		list = ft_lstget(app->stack_b, 0);
		app->stack_b = ft_lstget(app->stack_b, 1);
		ft_lstdelone(ft_lstget(list, 0), free);
		app->size_a++;
		app->size_b--;
		if (move == 1)
			ft_move(app, "pa");
	}
}
