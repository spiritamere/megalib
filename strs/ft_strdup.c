/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:04:09 by ljourand          #+#    #+#             */
/*   Updated: 2021/12/06 13:30:06 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen(src);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

char	*ft_strndup(const char *src, int n)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen(src);
	if (len > n)
		len = n;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (src[i] && i < n)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
