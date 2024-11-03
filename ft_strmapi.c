/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:59:39 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/11/01 21:03:17 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*full;
	unsigned int	i;

	if (!s)
		return(0);
	full = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!full)
		return(0);
	i = 0;
	while (s[i] != '\0')
	{
		full[i] = f(i, s[i]);
		i++;
	}
	full[i] = '\0';
	return(full);
}