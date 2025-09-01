/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:15:04 by mconreau          #+#    #+#             */
/*   Updated: 2022/04/01 15:50:00 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;

	pointer = ft_strchr(s, c);
	if (pointer)
		while (ft_strchr(pointer + 1, c)
			&& ft_strlen(pointer) > 0)
			pointer = ft_strchr(pointer + 1, c);
	return (pointer);
}
