/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:24:51 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/26 12:32:54 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		ptr = (char *)&s[i];
		return (ptr);
	}
	return (NULL);
}
