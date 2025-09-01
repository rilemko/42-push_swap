/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:00:30 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:34:56 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_app *app, int code)
{
	ft_app_clear(app);
	exit(code);
}

void	ft_exit_failure(t_app *app, const char *message, int colored)
{
	if (message && ft_strlen(message))
		ft_output_failure(message, colored);
	ft_exit(app, EXIT_FAILURE);
}

void	ft_exit_success(t_app *app, const char *message, int colored)
{
	if (message && ft_strlen(message))
		ft_output_success(message, colored);
	ft_exit(app, EXIT_SUCCESS);
}
