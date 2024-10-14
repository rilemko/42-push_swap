/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:04:34 by mconreau          #+#    #+#             */
/*   Updated: 2022/05/24 15:42:18 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmjoin(char const *s1, char const *s2)
{
	size_t	ttlsize;
	char	*memory;

	if (!s1 || !s2)
		return (NULL);
	ttlsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	memory = (char *) ft_calloc(ttlsize, sizeof(char));
	if (!memory)
		return (NULL);
	ft_strlcpy(memory, s1, ttlsize);
	ft_strlcat(memory, s2, ttlsize);
	free((void *) s1);
	return (memory);
}
