/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:12:23 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/20 19:12:25 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum (int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
int main (void)
{
	printf ("Esta es nuestra fucnion:%i\n", ft_isalnum ('2'));
	printf ("Esta es funcion real:%i\n", ft_isalnum ('C'));
	printf ("Esta es otra funcion real:%i\n", ft_isalnum ('c'));
	return (0);
}