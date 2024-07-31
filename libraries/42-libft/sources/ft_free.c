/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:02:52 by mconreau          #+#    #+#             */
/*   Updated: 2022/09/08 17:03:30 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(void *pointer)
{
	free(pointer);
}

void	ft_free_deep(void **pointer)
{
	size_t	index;

	index = 0;
	while (pointer[index])
		ft_free(pointer[index++]);
	ft_free(pointer);
}
