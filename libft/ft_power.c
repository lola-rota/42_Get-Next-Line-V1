/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:30:46 by grota             #+#    #+#             */
/*   Updated: 2017/11/30 17:38:31 by grota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int a, unsigned int n)
{
	int		b;

	b = a;
	if (n == 0)
		return (1);
	while (n > 1)
	{
		b = b * a;
		n--;
	}
	return (b);
}
