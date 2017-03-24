/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:51:04 by amalcoci          #+#    #+#             */
/*   Updated: 2016/08/22 14:51:09 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/libft.h"

void	draw(t_point p, void *send)
{
	char *str;

	str = send;
	printf("%lf, %lf, %s", p.x, p.y, str);
}

int		main(void)
{
	t_line l;

	l.a.x = 10;
	l.a.y = 20;
	l.b.x = 0;
	l.b.y = 0;
	ft_line(l, "Hello\n", 0.125, draw);
}
