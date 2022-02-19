/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:01:58 by cagirdem          #+#    #+#             */
/*   Updated: 2022/02/12 19:02:03 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		length(char const *s)
{
	char const *p;

	while ((*s == ' ' || *s == '\t' || *s == '\n') && *s)
		s++;
	p = s;
	while (*s != '\0')
		s++;
	if (p != s)
		s--;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s--;
	return ((s - p) + 1);
}

char			*ft_strtrim(char const *s)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	while ((*s == ' ' || *s == '\t' || *s == '\n') && *s)
		s++;
	str = ft_strsub(s, 0, length(s));
	return (str);
}
