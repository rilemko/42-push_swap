/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _definitions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:04:01 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:33:50 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "_constants.h"

typedef int			t_fd;
typedef int			t_pid;
typedef int			t_rt;

typedef struct s_app
{
	int		argc;
	char	*args;
	char	**argv;
	int		count;
	int		display_moves;
	int		is_presorted;
	int		median;
	int		moves;
	t_lst	*movings;
	char	*name;
	t_lst	*stack_a;
	t_lst	*stack_b;
	t_lst	*stack_t;
	int		size_a;
	int		size_b;
	t_lst	*targets;
}	t_app;

typedef struct s_nxt
{
	int	reverse_a;
	int	reverse_b;
	int	rotate_a;
	int	rotate_b;
	int	movings;
	int	moves_a;
	int	moves_b;
}	t_nxt;
