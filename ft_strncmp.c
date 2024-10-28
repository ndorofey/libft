/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:45:28 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:27:10 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n - 1 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		return (unsigned char) (s1[i]) - (unsigned char) (s2[i]);
		i++;
	}
	return (0);
}