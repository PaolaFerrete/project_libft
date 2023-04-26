/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:19:55 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/26 12:35:43 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			ptr = (char *)&s[len];
			return (ptr);
		}
		len--;
	}
	return (NULL);
}
