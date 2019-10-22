/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:07:03 by tbouder           #+#    #+#             */
/*   Updated: 2016/11/24 16:37:29 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*st;
	size_t	i;

	if (!s)
		return (NULL);
	st = ft_strnew(len);
	if (!st)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		st[i] = s[start];
		start++;
	}
	st[i] = '\0';
	return (st);
}
