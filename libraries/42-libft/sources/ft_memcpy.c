/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:51:01 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/04 15:38:06 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*destination;
	const char	*source;

	destination = (char *) dst;
	source = (const char *) src;
	if (destination || source)
		while (n--)
			ft_memset(destination++, *source++, 1);
	return (dst);
}
