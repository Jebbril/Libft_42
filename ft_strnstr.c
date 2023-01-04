/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:21:30 by orakib            #+#    #+#             */
/*   Updated: 2022/11/07 14:48:18 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0] && i < len)
		{
			j = 0;
			while (needle[j])
			{
				if (haystack[i + j] == needle[j] && i + j < len)
					j++;
				else
					break ;
			}
			if (j == ft_strlen(needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
