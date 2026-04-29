/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:18:55 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/22 12:34:32 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrev(void *s, size_t n)
{
	size_t	index;
	char	buffer;

	n--;
	index = 0;
	while (index < n)
	{
		ft_memcpy(&buffer, s + index, 1);
		ft_memcpy(s + index++, s + n, 1);
		ft_memcpy(s + n--, &buffer, 1);
	}
	return ((void *) s);
}
