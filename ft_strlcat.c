/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:20:14 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/19 11:22:43 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dpos;
	int		i;

	slen = 0;
	dpos = 0;
	i = 0;
	while (src[slen] != '\0')
	{
		slen++;
	}
	while (dest[dpos] != '\0' && dpos < dstsize)
	{
		dpos++;
	}
	while (src[i] != '\0' && dpos < dstsize)
	{
		dest[dpos++] = src[i++];
	}
	if (dpos < dstsize)
	{
		dest[dpos] = '\0';
	}
	return (dpos);
}
