/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:14:20 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/21 16:08:32 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copie n bytes from src to dest. Check if have a overlap */
/*param: pointer dest, src and size_t n */
/*return dest*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	if (dest < src)
	{
		while (n > 0)
		{
			d[i] = s[i];
			i++;
			n--;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
