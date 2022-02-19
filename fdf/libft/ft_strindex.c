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

int	ft_strindex(char *haystack, char *needle)
{
	int i;
	int j;
	int n;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		n = i;
		while (needle[j] == haystack[n])
		{
			if (needle[j + 1] == '\0')
				return (i);
			n++;
			j++;
		}
		i++;
	}
	return (-1);
}
