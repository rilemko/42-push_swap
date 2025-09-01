/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nxt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:40:21 by mconreau          #+#    #+#             */
/*   Updated: 2024/10/12 20:52:19 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_nxt_creation(t_nxt *nxt, t_app *app);
static void	ft_nxt_movings(t_nxt *nxt, t_app *app, int index_a, int index_b);
static int	ft_nxt_reversed(t_nxt *nxt, int size, int *reverse, int *index);
static void	ft_nxt_validate(t_nxt *nxt, t_app *app);

void	ft_nxt_initialize(t_nxt *nxt, t_app *app)
{
	nxt->reverse_a = 0;
	nxt->reverse_b = 0;
	nxt->rotate_a = 0;
	nxt->rotate_b = 0;
	nxt->movings = app->count;
	nxt->moves_a = app->count;
	nxt->moves_b = app->count;
	ft_nxt_creation(nxt, app);
	ft_nxt_validate(nxt, app);
}

static void	ft_nxt_creation(t_nxt *nxt, t_app *app)
{
	int		index_a;
	int		index_b;

	index_b = -1;
	while (++index_b < app->size_b)
	{
		if (ft_nxt_reversed(nxt, app->size_b, &nxt->reverse_b, &index_b))
			continue ;
		index_a = -1;
		nxt->reverse_a = 0;
		while (++index_a < app->size_a)
		{
			if (ft_nxt_reversed(nxt, app->size_a, &nxt->reverse_a, &index_a))
				continue ;
			if (ft_utils_is_placed(app, index_a, index_b))
			{
				ft_nxt_movings(nxt, app, index_a, index_b);
				break ;
			}
		}
	}
}

static void	ft_nxt_movings(t_nxt *nxt, t_app *app, int index_a, int index_b)
{
	int	movings;

	movings = ft_utils_count_moves(index_a, app->size_a, 1)
		+ ft_utils_count_moves(index_b, app->size_b, 1) + 1;
	if (movings < nxt->movings)
	{
		nxt->moves_a = index_a;
		nxt->moves_b = index_b;
		nxt->movings = movings;
	}
}

static int	ft_nxt_reversed(t_nxt *nxt, int size, int *reverse, int *index)
{
	if (*(index) == nxt->movings && !*(reverse))
	{
		*(index) = size - nxt->movings;
		*(reverse) = 1;
		return (1);
	}
	return (0);
}

static void	ft_nxt_validate(t_nxt *nxt, t_app *app)
{
	nxt->rotate_a = ft_utils_count_moves(nxt->moves_a, app->size_a, 0);
	nxt->rotate_b = ft_utils_count_moves(nxt->moves_b, app->size_b, 0);
}
