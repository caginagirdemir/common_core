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

char	*ft_strstr(const char *haystach, const char *needle)
{
	int i;
	int j;
	int n;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystach);
	while (haystach[i])
	{
		j = 0;
		n = i;
		while (haystach[n] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)&haystach[i]);
			j++;
			n++;
		}
		i++;
	}
	return (0);
}
