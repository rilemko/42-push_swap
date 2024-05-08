/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:01:40 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/08 12:18:30 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	size = size * count;
	memory = malloc(size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
