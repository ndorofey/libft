/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:45:28 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/23 23:55:58 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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