/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:02:33 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/19 13:35:52 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*erase the data int the n bytes of the memory*/
/* param: *str pointer, size_t n */

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n-- > 0)
	{
		p[n] = '\0';
	}
}
