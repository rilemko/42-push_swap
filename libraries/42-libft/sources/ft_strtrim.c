/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:27:26 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/05 12:38:20 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	stop;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	stop = ft_strlen(s1);
	if (stop <= start)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[stop]))
		stop--;
	return (ft_substr(s1, start, stop - start + 1));
}
