/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:42:07 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/22 12:39:39 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char			**memory;
	char			buffer[200000];
	unsigned int	index;

	if (!s)
		return (NULL);
	memory = ft_calloc(ft_strcnt(s, c) + 1, sizeof(char *));
	if (!memory)
		return (NULL);
	index = 0;
	while (*s)
	{
		if (*s++ != c)
			ft_chrcat(buffer, *(s - 1), 200000);
		if (ft_strlen(buffer) > 0 && (*s == c || !*s))
		{
			memory[index++] = ft_strdup(buffer);
			ft_bzero(buffer, 200000);
		}
	}
	memory[index] = NULL;
	return (memory);
}
