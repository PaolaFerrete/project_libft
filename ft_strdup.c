/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:30:01 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/25 11:54:39 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*create a new string which is a duplicate of the string s*/

char	*ft_strdup(const char *s)
{
	char	*cstring;
	size_t	i;

	if (!s)
	{
		return (NULL);
	}
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
