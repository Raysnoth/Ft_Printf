/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:45:11 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/22 15:45:12 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Fonction qui premet de calculer la taille d'une string multi bytes char
*/

int			ft_wstrlen(wchar_t *wstr)
{
	int		i;
	char	*bin;
	int		len;

	i = 0;
	len = 0;
	while (wstr && wstr[i])
	{
		bin = ft_intmaxtoa_base(wstr[i], 2);
		if (ft_strlen(bin) < 8)
			len += 1;
		if (ft_strlen(bin) >= 8 && ft_strlen(bin) <= 11)
			len += 2;
		if (ft_strlen(bin) >= 12 && ft_strlen(bin) <= 16)
			len += 3;
		if (ft_strlen(bin) >= 17 && ft_strlen(bin) <= 21)
			len += 4;
		if ((ft_strlen(bin) > 8 && MB_CUR_MAX == 1) || ft_strlen(bin) > 21)
			len = -1;
		ft_strdel(&bin);
		if (len == -1)
			return (-1);
		i++;
	}
	return (len);
}
