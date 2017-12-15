/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_to_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:47:09 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/22 15:47:10 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int				ft_bin_to_dec(char *bin)
{
	int		len;
	int		i;
	int		res;

	i = 0;
	res = 0;
	len = ft_strlen(bin);
	while (i < len)
	{
		if (bin[i] == '1')
			res += ft_power(2, len - i - 1);
		i++;
	}
	ft_strdel(&bin);
	return (res);
}
