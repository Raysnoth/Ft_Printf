/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_binary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:44:08 by gauffret          #+#    #+#             */
/*   Updated: 2017/03/22 15:44:11 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Ensemble de fonctions permettant de transformer le nombre en
** caractere multi-octets pour pouvoir l'afficher correctement par la suite
*/

static int	*convert_bytes(char *bin, int i, int len_tab, char *binary)
{
	int		*nbr;

	nbr = (int *)malloc(sizeof(int) * len_tab);
	if (!nbr)
		return (NULL);
	while (i < len_tab)
		nbr[i++] = -1;
	binary = ft_strsub(bin, 0, 8);
	nbr[0] = ft_bin_to_dec(binary);
	if (len_tab - 1 >= 2)
	{
		binary = ft_strsub(bin, 8, 8);
		nbr[1] = ft_bin_to_dec(binary);
	}
	if (len_tab - 1 >= 3)
	{
		binary = ft_strsub(bin, 16, 8);
		nbr[2] = ft_bin_to_dec(binary);
	}
	if (len_tab - 1 == 4)
	{
		binary = ft_strsub(bin, 24, 8);
		nbr[3] = ft_bin_to_dec(binary);
	}
	return (nbr);
}

static int	*recup_bytes(char *bin, char *mask)
{
	int		*nbr;
	int		i;
	int		j;

	i = ft_strlen(bin) - 1;
	j = ft_strlen(mask) - 1;
	while (bin && mask && i > -1)
	{
		if (mask[j] == 'x')
		{
			mask[j] = bin[i];
			i--;
		}
		j--;
	}
	j = 0;
	while (mask && mask[j])
	{
		if (mask[j] == 'x')
			mask[j] = '0';
		j++;
	}
	nbr = convert_bytes(mask, 0, (ft_strlen(mask) / 8 + 1), NULL);
	ft_strdel(&mask);
	return (nbr);
}

int			*ft_parse_binary(unsigned long nb)
{
	int		*nbr;
	char	*mask;
	char	*bin;

	bin = ft_intmaxtoa_base(nb, 2);
	if (ft_strlen(bin) < 8)
	{
		if (!(nbr = (int *)malloc(sizeof(int) * 5)))
			return (NULL);
		nbr[0] = nb;
		nbr[1] = -1;
	}
	else
	{
		if (ft_strlen(bin) >= 8 && ft_strlen(bin) <= 11)
			mask = ft_strdup("110xxxxx10xxxxxx");
		if (ft_strlen(bin) >= 12 && ft_strlen(bin) <= 16)
			mask = ft_strdup("1110xxxx10xxxxxx10xxxxxx");
		if (ft_strlen(bin) >= 17 && ft_strlen(bin) <= 21)
			mask = ft_strdup("11110xxx10xxxxxx10xxxxxx10xxxxxx");
		nbr = recup_bytes(bin, mask);
	}
	ft_strdel(&bin);
	return (nbr);
}
