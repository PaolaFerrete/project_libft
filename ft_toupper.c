/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:53:26 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/22 17:25:41 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*convert a character to uppercase*/

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
