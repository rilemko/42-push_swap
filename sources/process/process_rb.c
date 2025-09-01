/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:35:32 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:36:41 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_rb(t_app *app, int move, size_t repeat)
{
	t_lst	*list;

	while (repeat-- > 0)
	{
		if (app->size_b > 1)
		{
			ft_lstadd_back(&app->stack_b, ft_lstnew(
					ft_intdup(*((int *) ft_lstgetcontent(app->stack_b, 0)))));
			list = ft_lstget(app->stack_b, 0);
			app->stack_b = ft_lstget(app->stack_b, 1);
			ft_lstdelone(list, free);
		}
		if (move == 1)
			ft_move(app, "rb");
	}
}
