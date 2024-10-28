/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:36:35 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 00:38:27 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	n;

	f = (unsigned char *)b;
	n = (unsigned char)c;
	i = 0; 
	while (i <= len - 1)
	{
		f[i] = n;
		i++;
	}
	return ((void *)f);

}
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	str[5] = "hola";
	
	printf("%s", (char *)ft_memset((void *)str, 'a', 3));
	return (0);
}
