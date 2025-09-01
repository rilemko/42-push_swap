/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:55:28 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:34:56 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_output(const char *message, int fd)
{
	ft_putstr_fd((char *) message, fd);
}

void	ft_output_failure(const char *message, int colored)
{
	if (colored != 0)
		ft_output("\033[0;31m[Error] > ", STDERR_FILENO);
	ft_output(message, STDERR_FILENO);
	if (colored != 0)
		ft_output("\033[0;0m\n", STDERR_FILENO);
}

void	ft_output_success(const char *message, int colored)
{
	if (colored != 0)
		ft_output("\033[0;32m[Success] > ", STDOUT_FILENO);
	ft_output(message, STDOUT_FILENO);
	if (colored != 0)
		ft_output("\033[0;0m\n", STDOUT_FILENO);
}

void	ft_output_warning(const char *message, int colored)
{
	if (colored != 0)
		ft_output("\033[0;33m[Warning] > ", STDOUT_FILENO);
	ft_output(message, STDOUT_FILENO);
	if (colored != 0)
		ft_output("\033[0;0m\n", STDOUT_FILENO);
}
