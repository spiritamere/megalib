/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:29:52 by ljourand          #+#    #+#             */
/*   Updated: 2021/12/06 13:36:37 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printx(va_list pi, int fd)
{
	return (ft_putnbr_fd(va_arg(pi, int), fd), fd);
}

int	ft_printupperx(va_list pi, int fd)
{
	return (ft_putnbr_fd(va_arg(pi, int), fd), fd);
}
