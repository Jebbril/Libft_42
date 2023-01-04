/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:37:44 by orakib            #+#    #+#             */
/*   Updated: 2022/11/07 15:27:24 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)b;
	while (i < len)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
