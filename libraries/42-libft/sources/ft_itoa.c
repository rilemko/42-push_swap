/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:42:05 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/04 15:58:58 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			buffer[12];
	unsigned int	nbrlen;
	unsigned int	index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_bzero(buffer, 12);
	nbrlen = ft_nbrlen(n);
	if (n < 0)
	{
		ft_memset(&buffer[nbrlen], '-', 1);
		n = -n;
	}
	index = 0;
	while (index < nbrlen)
	{
		ft_memset(&buffer[index++], (n % 10) + '0', 1);
		n /= 10;
	}
	return (ft_strdup(ft_strrev(buffer)));
}
