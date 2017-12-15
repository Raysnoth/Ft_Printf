# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/13 13:33:24 by gauffret          #+#    #+#              #
#    Updated: 2017/12/12 11:36:17 by gauffret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

SRC_PATH		=	src

SRC_LIB_PATH	=	libft/src

OBJ_PATH		=	obj

OBJ_LIB_PATH	=	libft/obj

SRC_NAME		=	flag_d_i.c \
					flag_d_i2.c \
					flag_c.c \
					flag_s.c \
					flag_p.c \
					flag_p2.c \
					flag_x.c \
					flag_o.c \
					flag_f.c \
					flag_u.c \
					flag_e.c \
					flag_g.c \
					flag_g2.c \
					flag_b.c \
					flag_b2.c \
					flag_lc.c \
					flag_lc2.c \
					flag_ls.c \
					flag_ls2.c \
					flag_no.c \
					ft_printf.c \
					treat_value.c \
					treat_value2.c \
					treat_format.c \
					add_color.c \
					add_color2.c \
					search_value.c \
					sort_flags.c \
					sort_flags2.c \
					sort_no_flags.c \
					sort_no_flags2.c \
					recup_nb_e_g.c \
					ft_bin_to_dec.c \
					ft_parse_binary.c \
					ft_power.c \
					ft_wstrlen.c \

SRC_LIB_NAME	=	brackets.c \
					ft_abs.c \
					ft_atoi.c ft_itoa.c ft_itoa_base.c \
					ft_ftoa.c \
					ft_intmaxtoa_base.c ft_intmaxtoa.c \
					ft_uintmaxtoa.c ft_uintmaxtoa_base.c \
					ft_bzero.c \
					ft_concat.c \
					ft_double_dim.c \
					ft_isalnum.c ft_isalpha.c ft_islower.c ft_isupper.c ft_isascii.c \
					ft_isdigit.c ft_isprint.c ft_ishex.c\
					ft_less_begin.c \
					ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
					ft_lstnew.c \
					ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
					ft_memdel.c ft_memmove.c ft_memset.c \
					ft_putchar.c ft_putchar_fd.c \
					ft_putendl.c ft_putendl_fd.c \
					ft_putnbr.c ft_putnbr_fd.c \
					ft_putnbrendl.c ft_putnbrendl_fd.c \
					ft_putstr.c ft_putstr_fd.c \
					ft_realloc_sub.c \
					ft_strcat.c ft_strlcat.c ft_strncat.c \
					ft_strchr.c ft_strrchr.c ft_strchri.c\
					ft_strclr.c \
					ft_strcmp.c ft_strncmp.c \
					ft_strcpy.c ft_strncpy.c \
					ft_strdel.c ft_strnew.c \
					ft_strdup.c \
					ft_strequ.c ft_strnequ.c \
					ft_striter.c ft_striteri.c \
					ft_strjoin.c \
					ft_strlen.c \
					ft_strmap.c ft_strmapi.c \
					ft_strnstr.c ft_strstr.c \
					ft_strsplit.c \
					ft_strsub.c \
					ft_strtrim.c \
					ft_tolower.c ft_toupper.c ft_strtolower.c ft_strtoupper.c \
					get_next_line.c \

OBJ_NAME		=	$(SRC_NAME:.c=.o)

OBJ_LIB_NAME	=	$(SRC_LIB_NAME:.c=.o)

SRC				=	$(addprefix $(SRC_PATH)/,$(SRC_NAME))

SRC_LIB			=	$(addprefix $(SRC_LIB_PATH)/,$(SRC_LIB_NAME))

OBJ				=	$(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

OBJ_LIB			=	$(addprefix $(OBJ_LIB_PATH)/,$(OBJ_LIB_NAME))

INCL_PATH		=	include

INCL			=	-I$(INCL_PATH) -Ilibft/includes

INCL_LIB_PATH	=	libft/includes

INCL_LIB		=	-I$(INCL_LIB_PATH)

CC				=	gcc

CFLAGS			=	-Wall -Werror -Wextra -g

PTFFLAGS		=	-Wno-format

.PHONY : all, clean, fclean, re, norme

all :	$(NAME)

$(OBJ_LIB_PATH)/%.o : $(SRC_LIB_PATH)/%.c
	@mkdir $(OBJ_LIB_PATH) 2>/dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $< $(INCL_LIB)

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2>/dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $< $(INCL)

$(NAME) : $(OBJ) $(OBJ_LIB)
	@echo "\033[36mFt_printf : Compilation .o [✓]\033[0m"
	@ar rc $@ $^
	@ranlib $@
	@echo "\033[32mFt_printf : Compilation libftprintf.a [✓]\033[0m"

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJ_LIB)
	@echo "\033[31mFt_printf : Remove .o [✓]\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mFt_printf : Remove libftprintf.a [✓]\033[0m"

re :	fclean all

norme:
	norminette $(SRC_LIB)
	norminette $(INCL_LIB_PATH)
	norminette $(SRC)
	norminette $(INCL_PATH)
