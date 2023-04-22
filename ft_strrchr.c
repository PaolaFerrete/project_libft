/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:19:55 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/22 17:00:05 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;
	char *ptr;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
		{
			ptr = (char *)&s[len];
			return (ptr);
		}
		len--;
	}
	if (c == '\0')
	{
		ptr = (char *)&s[len];
		return (ptr);
	}
	return (NULL);
}
