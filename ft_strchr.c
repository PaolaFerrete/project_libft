/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:24:51 by pferrete          #+#    #+#             */
/*   Updated: 2023/05/01 08:47:17 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Search for the first occurrence of the character */

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
