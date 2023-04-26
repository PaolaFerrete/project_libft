/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:01:44 by paola             #+#    #+#             */
/*   Updated: 2023/04/25 20:16:35 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (s1);
	s2 = malloc(sizeof(char) * strlen(s1));
	if (!s2)
		return (NULL);
	i = 0;
}
