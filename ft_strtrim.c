/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:15:28 by orakib            #+#    #+#             */
/*   Updated: 2022/11/06 15:08:30 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcheck(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1 && !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] && ft_setcheck(set, s1[i]))
		i++;
	while (j > i && ft_setcheck(set, s1[j - 1]))
		j--;
	str = (char *)malloc((j - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = 0;
	return (str);
}
