/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:04:00 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/14 17:37:54 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	strsize;
	char	*memory;

	strsize = ft_strlen(s1) + 1;
	memory = (char *) ft_calloc(strsize, sizeof(char));
	if (!memory)
		return (NULL);
	ft_bzero(memory, strsize);
	ft_strlcpy(memory, s1, strsize);
	return (memory);
}
