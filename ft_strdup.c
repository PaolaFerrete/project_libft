/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:30:01 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/26 12:18:19 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*create a new string which is a duplicate of the string s*/

char	*ft_strdup(const char *s)
{
	char	*cstring;
	size_t	i;

	i = 0;
	cstring = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!cstring)
	{
		return (NULL);
	}
	while (s[i])
	{
		cstring[i] = s[i];
		i++;
	}
	cstring[i] = '\0';
	return (cstring);
}
