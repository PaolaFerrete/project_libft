/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:30:01 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/24 14:25:06 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*create a new string which is a duplicate of the string s*/

char	*ft_strdup(const char *s)
{
	char	*cstring;
	size_t	i;
	size_t	len;

	if (!s)
	{
        return (NULL);
	}
	i = 0;
	len = sizeof(s);
	cstring = malloc(len);
	while (i < len)
	{
		cstring[i] = s[i];
		i++;
	}
	return (cstring);
}

