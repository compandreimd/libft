/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 13:48:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/21 13:48:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	appendc(char **str, char c, size_t l)
{
	char	*buff;
	size_t	i;

	buff = ft_strnew(l + 1);
	i = 0;
	while (i < l)
	{
		buff[i] = (*str)[i];
		i++;
	}
	buff[i] = c;
	ft_strdel(str);
	*str = buff;
}

char		*ft_getline(int fd)
{
	char	*buff;
	char	c;
	size_t	i;

	buff = NULL;
	i = 0;
	while (read(fd, &c, 1))
	{
		appendc(&buff, c, i++);
		if (c == '\n')
			return (buff);
	}
	return (buff);
}
