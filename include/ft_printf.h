/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 10:56:31 by gauffret          #+#    #+#             */
/*   Updated: 2017/01/02 10:57:10 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <locale.h>
# include <wchar.h>
# include <limits.h>
# include "../libft/includes/libft.h"

# define SPEC "sSpdDioOuUxXcCfFeEbBgG"
# define FLAG "#0- +"
# define LENG "hljz"
# define CHAR "#0- +hljz0123456789-*."

typedef struct		s_out
{
	char			*all;
	char			*specifier;
	int				*flag;
	int				width;
	int				precision;
	char			*lenght;
	char			*res;
}					t_out;

typedef struct		s_ptf
{
	struct s_out	*output;
	char			*result;
	char			*str_tmp;
	char			*formats;
	int				len_return;
	va_list			args;
}					t_ptf;

int					ft_printf(const char *formats, ...);
void				all_color(char *color);
void				no_color_found(t_ptf *var, int i);
int					search_value(t_ptf *var);
void				search_color(t_ptf *var, int i, char *res, char *color);
int					recup_spec(t_ptf *var, char spec);
void				treat_flag(t_ptf *var, int i);
int					recup_spec_end(t_ptf *var, char *res, char spec, \
																char *lenght);
int					treat_formats(t_ptf *var);
char				*recup_spec_int(t_ptf *var, char *str, int nb_null);
void				recup_spec_char(t_ptf *var, char spec, int c);
char				*recup_spec_str(t_ptf *var, char *tmp);
int					recup_spec_lchar(t_ptf *var, char *str);
char				*recup_spec_oct(t_ptf *var, char *str);
char				*recup_spec_addrp(t_ptf *var, char *res);
char				*recup_spec_hex(t_ptf *var, char spec, char *str);
char				*recup_spec_float(t_ptf *var, char *str);
char				*recup_spec_uint(t_ptf *var, char *str);
char				*recup_spec_scien(t_ptf *var, char spec, char *str);
char				*recup_spec_betdot(t_ptf *var, char *str, double nb, int i);
char				*recup_spec_bin(t_ptf *var, char *str);
char				*spec_float_flags(char *str, int *flags);
char				*spec_char_prec(char *str, int precision);
char				*spec_char_width(t_ptf *var, char *str, int *flags);
int					recup_spec_lstr(t_ptf *var, int nb);
void				treat_no_spec_found(t_ptf *var);
void				sort_value(t_ptf *var, int i, int j, char *all);
void				sort_value_no_spec(t_ptf *var, int i, int j, char *all);
int					lenght_no_flags(t_ptf *var, int i, char *all);
char				*spec_addr_width(t_ptf *var, char *str, int *flags, int i);
char				*spec_addr_precision(char *str, int precision, int i);
char				*spec_bin_width(t_ptf *var, char *str, int *flags);
char				*spec_float_width(t_ptf *var, char *str, int *flags, int i);
char				*spec_int_width(t_ptf *var, char *str, int *flags, int i);
char				*recup_nb_e_g(double nb, t_ptf *var, char *str);
int					precision_flags(t_ptf *var, int i, char *all);
char				*spec_wchar_width(t_ptf *var, char *str, int *flags, \
																int len_char);
int					ft_bin_to_dec(char *bin);
int					*ft_parse_binary(unsigned long nb);
int					ft_wstrlen(wchar_t *wstr);
int					ft_power(int nb, int pow);
int					flags_width_star(t_ptf *var, int i, int action);
char				*spec_int_zero(t_ptf *var, char *str, int *flags, \
																int precision);
int					spec_lstr_full(t_ptf *var, wchar_t *wstr, char **str, \
																	int wlen);
char				*spec_lstr_empty(char *str, int len, int *flags);
char				*spec_wstr_width(t_ptf *var, char *str, int len, \
																int *flags);
int					spec_lstr_wlen(char *bin);
char				*spec_betdot_delzero(char *res);
char				*spec_betdot_prec(char *res, int precision, int i);
char				*spec_betdot_width(t_ptf *var, char *res, int len, int i);
char				*spec_betdot_removedot(char *res);

#endif
