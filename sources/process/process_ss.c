/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:07:19 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:34:56 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_ss(t_app *app, int move, size_t repeat)
{
	while (repeat-- > 0)
	{
		if (app->size_a < 2 && app->size_b < 2)
			return ;
		ft_process_sa(app, 0, 1);
		ft_process_sb(app, 0, 1);
		if (move == 1)
			ft_move(app, "ss");
	}
}
