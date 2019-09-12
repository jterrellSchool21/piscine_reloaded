/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:47:26 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/03 14:58:45 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	if (min >= max)
		return (NULL);
	i = 0;
	res = (int*)malloc(sizeof(*res) * (max - min) + 1);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
