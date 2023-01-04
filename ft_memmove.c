/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:50:22 by orakib            #+#    #+#             */
/*   Updated: 2022/11/07 15:01:23 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		while (len-- != 0)
			*dst1++ = *src1++;
	}
	else if (dst > src)
	{
		dst1 += len - 1;
		src1 += len - 1;
		while (len-- != 0)
			*dst1-- = *src1--;
	}
	return (dst);
}
