/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:42:10 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:34:56 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move(t_app *app, const char *move)
{
	app->moves++;
	ft_lstadd_back(&app->movings, ft_lstnew(ft_strdup(move)));
	if (app->display_moves == 0)
		return ;
	ft_output(move, 1);
	ft_output("\n", 1);
}
