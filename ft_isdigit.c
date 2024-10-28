/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:12:03 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/20 19:14:30 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit (int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
int main (void)
{
	printf ("Esta es nuestra funcion:%i\n",ft_isdigit ('2'));
	printf ("Esta es nuestra fucnion:%i\n", isdigit ('2'));
	return (0);
}