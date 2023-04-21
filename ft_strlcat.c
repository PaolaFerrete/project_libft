/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:20:14 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/21 20:05:28 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dpos;
	size_t	dlen;
	int		i;

	slen = strlen(src);
	dlen = strlen(dest);
	dpos = dlen;
	i = 0;
	while (src[i] != '\0' && dpos < dstsize - 1)
	{
		dest[dpos++] = src[i++];
	}
	dest[dpos] = '\0';
	return (dlen + dpos - 1);
}
