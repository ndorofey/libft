/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:05:02 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/11/01 21:04:51 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	else if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	j = 0;
	while (j < len)
	{
		dst[j] = s[start + j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}