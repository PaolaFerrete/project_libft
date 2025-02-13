/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:08:13 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/20 12:37:07 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*check if character is ascii*/
/*param c: char or int */
/*return 1 if is ascii and 0 if not*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
