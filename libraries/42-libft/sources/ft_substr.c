/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:10:16 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/05 12:35:29 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	offset;
	char	*memory;

	if (!s)
		return (NULL);
	offset = ft_strlen(s);
	if (start > offset)
		return (ft_strdup(""));
	offset = offset - start;
	if (len > offset)
		len = offset;
	memory = (char *) ft_calloc(len + 1, sizeof(char));
	if (!memory)
		return (NULL);
	ft_memcpy(memory, &s[start], len);
	ft_bzero(&memory[++len], 1);
	return (memory);
}
