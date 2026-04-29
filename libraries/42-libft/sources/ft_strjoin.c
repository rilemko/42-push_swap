/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:23:06 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/04 15:38:42 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
	return (memory);
}
