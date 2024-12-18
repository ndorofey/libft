/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:41:41 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 18:22:36 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if(needle || needle[i] == '\0')
		return (char *) haystack;
	while(i <= len - 1 && haystack[i] != '\0')
	{
		j = 0;
		while(i + j < len && haystack[i + j] == needle[j])
		{
			if(needle[j] == '\0')
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}