/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:18:22 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/21 14:19:44 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*copie n first bytes to from src to dest*/
/*param: unsigned char src and dest, size_t count*/
/*return dest or null if src and dest is null */

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (d == NULL && s == NULL)
	{
		return (NULL);
	}
	while (count > 0)
	{
		d[i] = s[i];
		i++;
		count--;
	}
	return (d);
}
