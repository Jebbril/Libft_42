/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:30:08 by orakib            #+#    #+#             */
/*   Updated: 2022/10/19 18:40:42 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*src1;

	i = 0;
	src1 = (char *)src;
	if (dstsize > 0)
	{
		while (src1[i] && i < dstsize - 1)
		{
			dst[i] = src1[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
