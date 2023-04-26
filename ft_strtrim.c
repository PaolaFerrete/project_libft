/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrete <pferrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:01:44 by paola             #+#    #+#             */
/*   Updated: 2023/04/26 14:21:43 by pferrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	z;

	if (!s1)
		return (NULL);
	s2 = malloc(sizeof(char) * (ft_strlen(s1)) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	z = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (s1[i] != set[j])
		s2[z++] = s1[i];
		i++;
	}
	dest = malloc(sizeof(char) * (z + 1));
	dest = ft_memcpy(dest, s2, (sizeof(char) * z));
	dest[z] = '\0';
	return (dest);
}
