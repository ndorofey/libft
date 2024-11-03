/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:25:37 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/11/01 21:01:08 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if(n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if(n < 10)
	{
		ft_putchar_fd(n + 48, fd);
		return;
	}
	else
		ft_putchar_fd((n/10),fd);
	ft_putnbr_fd((n % 10),fd);
	
}