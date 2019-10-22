/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:07:14 by tbouder           #+#    #+#             */
/*   Updated: 2016/11/22 15:08:31 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strtrim() function returns the string s without the white space at
** the beginning and at the end.
*/

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*fresh;
	int		start_fresh;
	int		end_fresh;
	int		j;

	if (!s)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	start_fresh = 0;
	end_fresh = ft_strlen(s);
	while (s[start_fresh] && ft_is_space(s[start_fresh]) == 1)
		start_fresh++;
	while (end_fresh > 0 && ft_is_space(s[end_fresh - 1]) == 1)
		end_fresh--;
	if (end_fresh <= start_fresh)
		return (ft_strdup(""));
	if (!(fresh = (char*)malloc(sizeof(char) * (end_fresh - start_fresh) + 1)))
		return (NULL);
	j = 0;
	while (start_fresh < end_fresh)
		fresh[j++] = s[start_fresh++];
	fresh[j] = '\0';
	return (fresh);
}
