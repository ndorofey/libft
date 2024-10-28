/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:12:11 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/20 19:14:30 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isacii (int c)
{
	if (c >= 00 && c <= 127)
		return (1);
	return (0);
}
int	main (void)
{
	printf ("Esta es la funcion real:%i\n", ft_isacii ('E'));
	return (0);
}