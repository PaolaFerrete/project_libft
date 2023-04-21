/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:19:03 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/20 10:59:05 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	if (d == NULL && s == NULL)
	{
		return (NULL);
	}
	if (s < d)
	{
		while (++i <= n)
			d[n -1] = s[n -1];
	}
	else
	{
		while (n-- > 0)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
