/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 11:41:25 by gauffret          #+#    #+#             */
/*   Updated: 2017/12/14 16:00:47 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>

#define RPTF 0
#define TEST_BAZE 0
#define	TEST_BASE 0
#define TEST_S 0
#define TEST_LS 0
#define TEST_O 0
#define TEST_LO 0
#define TEST_U 0
#define TEST_LU 0
#define TEST_X 0
#define TEST_LX 0
#define TEST_P 0
#define TEST_F 0
#define TEST_D 1
#define TEST_LD 0
#define TEST_C 0
#define TEST_LC 0
#define TEST_E 0
#define TEST_LE 0
#define TEST_G 0
#define TEST_LG 0
#define TEST_B 0
#define TEST_NO 0
#define TEST_COLOR 1
#define TEST_CHECKER 0
#define TEST_BAZAR 0
#define INFINITY 0

int main(void)
{
	int		i = 0;
	char	*nul = NULL;
	char	c = 'q';
	char	*str = ft_strdup("Chaine a afficher");
	int		nb_test = 0;
	int		dec = 42;
	long	ldec = 3659855789;
	double	dou = 000000444444.1516849;
	double	ldou = 3659855789.4567897;
	char*	l;
	double	nb_g = 000000424685.1516841;

	l = setlocale(LC_ALL, "");
	if (TEST_CHECKER)
	{
		ft_printf(" -- %d\n", ft_printf(">------------<%48lc>------------<%s", (char)-102, "fargfar"));
		printf(" -- %d\n", printf(">------------<%48lc>------------<%s", (char)-102, "fargfar"));

		//ft_printf(" -- %d\n", ft_printf("%#44.1X:%0#-32.0X$", 0, 0));
		//printf(" -- %d\n", printf("%#44.1X:%0#-32.0X$", 0, 0));

		//ft_printf(" -- %d\n", ft_printf("%#44.1llX:%0#-32.0llX$", 0, 0));
		//printf(" -- %d\n", printf("%#44.1llX:%0#-32.0llX$", 0, 0));
		//printf("%C\n", 'c');
		//ft_printf("% 5.10 d\n", 5);
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%f<--{eoc}", 1444565444646.6465424242242));
		//printf(" -- %d\n", printf("\t-->%f<--", 1444565444646.6465424242242));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--{eoc}", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%4.1S<--{eoc}", L"Jambon"));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%s<--{eoc}", 100));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--{eoc}", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
		//printf(" -- %d\n", printf("\t-->%C<--", 0x1234));
		//printf(" -- %d\n", printf("\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
		//printf(" -- %d\n", printf("\t-->%4.1S<--", L"Jambon"));
		//printf(" -- %d\n", printf("\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
		//ft_printf("%h -0ll43.*+zd\n", 1 , 42);
		//printf("%h -0ll43.*+zd\n", 1 , 42);
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%f<--{eoc}", 1.42));
		//printf(" -- %d\n", printf("\t-->%f<--", 1.42));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%f<--{eoc}", 1.42));
		//printf(" -- %d\n", printf("\t-->%f<--", 1.42));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("% Z%s", "test"));
		//printf(" -- %d\n", printf("% Z%s", "test"));
		//ft_printf(" -- %d\n", ft_printf("%g -- %g -- %g -- %g -- %g", 0.000042, 0.00000042, 42.0, 54336.2564, 5489461235.0));
		//if (RPTF)
		//		  printf(" -- %d\n", printf("%g -- %g -- %g -- %g -- %g", 0.000042, 0.00000042, 42.0, 54336.2564, 5489461235.0));
	}
	if (TEST_BAZE)
	{
		ft_printf("\n \t\t{green}-- BASIC TEST --{eoc} \n\n");
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d) cette chaine est nulle : -->%s<--{eoc}", ++i, nul));
		nb_test++;
		printf(" -- %d\n", printf("%d) cette chaine est nulle : -->%s<--", i, nul));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d) Les bornes :  %d, %d{eoc}", ++i, -2147483648, 2147483647));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d) Les bornes :  %u, %u{eoc}", ++i, 0, 4294967295));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d) Les bornes :  %o, %o{eoc}", ++i, 0, 4294967295));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d) Les bornes :  %x, %x{eoc}", ++i, 0, 4294967295));
		nb_test++;
	}
	i = 0;
	if (TEST_BASE)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST BASE --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}1)\t(%%s) : -->%s<--{eoc}", str));
		printf(" -- %d\n\n", printf("1)\t(%%s) : -->%s<--", str));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}2)\t(%%S) : -->%S<--{eoc}", L"Chaine a afficher"));
		printf(" -- %d\n\n", printf("2)\t(%%S) : -->%S<--", L"Chaine a afficher"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}3)\t(%%p) : -->%p<--{eoc}", str));
		printf(" -- %d\n\n", printf("3)\t(%%p) : -->%p<--", str));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}4)\t(%%d) : -->%d<--     -->%d<--{eoc}", dec, -dec));
		printf(" -- %d\n\n", printf("4)\t(%%d) : -->%d<--     -->%d<--", dec, -dec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}5)\t(%%D) : -->%D<--     -->%D<--{eoc}", ldec, -ldec));
		printf(" -- %d\n\n", printf("5)\t(%%D) : -->%D<--     -->%D<--", ldec, -ldec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}7)\t(%%o) : -->%o<--     -->%o<--{eoc}", dec, -dec));
		printf(" -- %d\n\n", printf("7)\t(%%o) : -->%o<--     -->%o<--", dec, -dec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}8)\t(%%O) : -->%O<--     -->%O<--{eoc}", ldec, -ldec));
		printf(" -- %d\n\n", printf("8)\t(%%O) : -->%O<--     -->%O<--", ldec, -ldec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}9)\t(%%u) : -->%u<--     -->%u<--{eoc}", dec, -dec));
		printf(" -- %d\n\n", printf("9)\t(%%u) : -->%u<--     -->%u<--", dec, -dec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}10)\t(%%U) : -->%U<--     -->%U<--{eoc}", ldec, -ldec));
		printf(" -- %d\n\n", printf("10)\t(%%U) : -->%U<--     -->%U<--", ldec, -ldec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}11)\t(%%x) : -->%x<--     -->%x<--{eoc}", ldec, -ldec));
		printf(" -- %d\n\n", printf("11)\t(%%x) : -->%x<--     -->%x<--", ldec, -ldec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}12)\t(%%X) : -->%X<--     -->%X<--{eoc}", ldec, -ldec));
		printf(" -- %d\n\n", printf("12)\t(%%X) : -->%X<--     -->%X<--", ldec, -ldec));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}13)\t(%%c) : -->%c<--{eoc}", c));
		printf(" -- %d\n\n", printf("13)\t(%%c) : -->%c<--", c));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}14)\t(%%C) : -->%C<--{eoc}", c));
		printf(" -- %d\n\n", printf("14)\t(%%C) : -->%C<--", c));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}15)\t(%%f) : -->%f<--     -->%f<--{eoc}", dou, dou));
		printf(" -- %d\n\n", printf("15)\t(%%f) : -->%f<--     -->%f<--", dou, dou));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}16)\t(%%F) : -->%F<--     -->%F<--{eoc}", ldou, ldou));
		printf(" -- %d\n\n", printf("16)\t(%%F) : -->%F<--     -->%F<--", ldou, ldou));
	}
	if (TEST_S)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%s --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*s<--{eoc}", ++i, 40, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*s<--", i, 40, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20s<--{eoc}", ++i, 40, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20s<--", i, 40, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*s<--{eoc}", ++i, 20, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*s<--", i, 20, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*s<--{eoc}", ++i, 40, 20, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*s<--", i, 40, 20, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#s<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10s<--{eoc}", ++i, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10s<--", i, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 s<--{eoc}", ++i, 20, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 s<--", i, 20, str));
		nb_test++;
	}
	i = 0;
	if (TEST_LS)
	{
		//L"我是一只猫。"
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%S --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*S<--{eoc}", ++i, 40, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*S<--", i, 40, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20S<--{eoc}", ++i, 40, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20S<--", i, 40, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*S<--{eoc}", ++i, 20, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*S<--", i, 20, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*S<--{eoc}", ++i, 40, 20, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*S<--", i, 40, 20, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#S<--", i, L"我是一只猫。", str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10S<--{eoc}", ++i, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10S<--", i, L"我是一只猫。"));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 S<--{eoc}", ++i, 20, L"我是一只猫。"));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 S<--", i, 20, L"我是一只猫。"));
		nb_test++;
	}
	i = 0;
	if (TEST_O)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%o --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%o<--     -->%o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%o<--     -->%o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40o<--     -->%40o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40o<--     -->%40o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40o<--     -->%+40o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40o<--     -->%+40o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0o<--     -->%0o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0o<--     -->%0o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40o<--     -->%.40o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40o<--     -->%.40o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3o<--     -->%.3o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3o<--     -->%.3o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20o<--     -->%40.20o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20o<--     -->%40.20o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40o<--     -->%-40o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40o<--     -->%-40o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+o<--     -->%+o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+o<--     -->%+o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20o<--     -->%+20o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20o<--     -->%+20o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*o<--     -->%*o<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*o<--     -->%*o<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20o<--     -->%*20o<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20o<--     -->%*20o<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*o<--     -->%.*o<--{eoc}", ++i, 20, dec, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*o<--     -->%.*o<--", i, 20, dec, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*o<--     -->%*.*o<--{eoc}", ++i, 40, 20, dec, 40, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*o<--     -->%*.*o<--", i, 40, 20, dec, 40, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#o<--     -->%#o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#o<--     -->%#o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% o<--     -->% o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% o<--     -->% o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% o<--     -->%     o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% o<--     -->%      o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020o<--     -->%020o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020o<--     -->%020o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020o<--     -->%-020o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020o<--     -->%-020o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020o<--     -->%+020o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020o<--     -->%+020o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020o<--     -->% 020o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020o<--     -->% 020o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.o<--     -->%.o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.o<--     -->%.o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5o<--     -->%.5o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5o<--     -->%.5o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20o<--     -->%-+20o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20o<--     -->%-+20o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20o<--     -->%-+020o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20o<--     -->%-+020o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#o<--     -->%#o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#o<--     -->%#o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.o<--     -->%#.o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.o<--     -->%#.o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10o<--     -->%#.10o<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10o<--     -->%#.10o<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 o<--     -->%#20-.*+0 o<--{eoc}", ++i, 10, dec, 10, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 o<--     -->%#20-.*+0 o<--", i, 10, dec, 10, -dec));
		nb_test++;
	}
	i = 0;
	if (TEST_LO)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%O --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%O<--     -->%O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%O<--     -->%O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40O<--     -->%40O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40O<--     -->%40O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40O<--     -->%+40O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40O<--     -->%+40O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0O<--     -->%0O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0O<--     -->%0O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40O<--     -->%.40O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40O<--     -->%.40O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3O<--     -->%.3O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3O<--     -->%.3O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20O<--     -->%40.20O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20O<--     -->%40.20O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40O<--     -->%-40O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40O<--     -->%-40O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+O<--     -->%+O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+O<--     -->%+O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20O<--     -->%+20O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20O<--     -->%+20O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*O<--     -->%*O<--{eoc}", ++i, 40, ldec, 40, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*O<--     -->%*O<--", i, 40, ldec, 40, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20O<--     -->%*20O<--{eoc}", ++i, 40, ldec, 40, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20O<--     -->%*20O<--", i, 40, ldec, 40, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*O<--     -->%.*O<--{eoc}", ++i, 20, ldec, 20, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*O<--     -->%.*O<--", i, 20, ldec, 20, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*O<--     -->%*.*O<--{eoc}", ++i, 40, 20, ldec, 40, 20, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*O<--     -->%*.*O<--", i, 40, 20, ldec, 40, 20, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#O<--     -->%#O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#O<--     -->%#O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% O<--     -->% O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% O<--     -->% O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% O<--     -->%     O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% O<--     -->%      O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020O<--     -->%020O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020O<--     -->%020O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020O<--     -->%-020O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020O<--     -->%-020O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020O<--     -->%+020O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020O<--     -->%+020O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020O<--     -->% 020O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020O<--     -->% 020O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.O<--     -->%.O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.O<--     -->%.O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5O<--     -->%.5O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5O<--     -->%.5O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20O<--     -->%-+20O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20O<--     -->%-+20O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20O<--     -->%-+020O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20O<--     -->%-+020O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#O<--     -->%#O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#O<--     -->%#O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.O<--     -->%#.O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.O<--     -->%#.O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10O<--     -->%#.10O<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10O<--     -->%#.10O<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 O<--     -->%#20-.*+0 O<--{eoc}", ++i, 10, ldec, 10, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 O<--     -->%#20-.*+0 O<--", i, 10, ldec, 10, -ldec));
		nb_test++;
	}
	i = 0;
	if (TEST_U)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%u --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%u<--     -->%u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%u<--     -->%u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40u<--     -->%40u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40u<--     -->%40u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40u<--     -->%+40u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40u<--     -->%+40u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0u<--     -->%0u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0u<--     -->%0u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40u<--     -->%.40u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40u<--     -->%.40u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3u<--     -->%.3u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3u<--     -->%.3u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20u<--     -->%40.20u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20u<--     -->%40.20u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40u<--     -->%-40u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40u<--     -->%-40u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+u<--     -->%+u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+u<--     -->%+u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20u<--     -->%+20u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20u<--     -->%+20u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*u<--     -->%*u<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*u<--     -->%*u<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20u<--     -->%*20u<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20u<--     -->%*20u<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*u<--     -->%.*u<--{eoc}", ++i, 20, dec, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*u<--     -->%.*u<--", i, 20, dec, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*u<--     -->%*.*u<--{eoc}", ++i, 40, 20, dec, 40, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*u<--     -->%*.*u<--", i, 40, 20, dec, 40, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#u<--     -->%#u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#u<--     -->%#u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% u<--     -->% u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% u<--     -->% u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% u<--     -->%     u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% u<--     -->%      u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020u<--     -->%020u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020u<--     -->%020u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020u<--     -->%-020u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020u<--     -->%-020u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020u<--     -->%+020u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020u<--     -->%+020u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020u<--     -->% 020u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020u<--     -->% 020u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.u<--     -->%.u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.u<--     -->%.u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5u<--     -->%.5u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5u<--     -->%.5u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20u<--     -->%-+20u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20u<--     -->%-+20u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20u<--     -->%-+020u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20u<--     -->%-+020u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#u<--     -->%#u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#u<--     -->%#u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.u<--     -->%#.u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.u<--     -->%#.u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10u<--     -->%#.10u<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10u<--     -->%#.10u<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 u<--     -->%#20-.*+0 u<--{eoc}", ++i, 10, dec, 10, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 u<--     -->%#20-.*+0 u<--", i, 10, dec, 10, -dec));
		nb_test++;
	}
	i = 0;
	if (TEST_LU)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%U --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%U<--     -->%U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%U<--     -->%U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40U<--     -->%40U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40U<--     -->%40U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40U<--     -->%+40U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40U<--     -->%+40U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0U<--     -->%0U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0U<--     -->%0U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40U<--     -->%.40U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40U<--     -->%.40U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3U<--     -->%.3U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3U<--     -->%.3U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20U<--     -->%40.20U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20U<--     -->%40.20U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40U<--     -->%-40U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40U<--     -->%-40U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+U<--     -->%+U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+U<--     -->%+U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20U<--     -->%+20U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20U<--     -->%+20U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*U<--     -->%*U<--{eoc}", ++i, 40, ldec, 40, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*U<--     -->%*U<--", i, 40, ldec, 40, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20U<--     -->%*20U<--{eoc}", ++i, 40, ldec, 40, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20U<--     -->%*20U<--", i, 40, ldec, 40, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*U<--     -->%.*U<--{eoc}", ++i, 20, ldec, 20, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*U<--     -->%.*U<--", i, 20, ldec, 20, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*U<--     -->%*.*U<--{eoc}", ++i, 40, 20, ldec, 40, 20, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*U<--     -->%*.*U<--", i, 40, 20, ldec, 40, 20, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#U<--     -->%#U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#U<--     -->%#U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% U<--     -->% U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% U<--     -->% U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% U<--     -->%     U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% U<--     -->%      U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020U<--     -->%020U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020U<--     -->%020U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020U<--     -->%-020U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020U<--     -->%-020U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020U<--     -->%+020U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020U<--     -->%+020U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020U<--     -->% 020U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020U<--     -->% 020U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.U<--     -->%.U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.U<--     -->%.U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5U<--     -->%.5U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5U<--     -->%.5U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20U<--     -->%-+20U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20U<--     -->%-+20U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20U<--     -->%-+020U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20U<--     -->%-+020U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#U<--     -->%#U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#U<--     -->%#U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.U<--     -->%#.U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.U<--     -->%#.U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10U<--     -->%#.10U<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10U<--     -->%#.10U<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 U<--     -->%#20-.*+0 U<--{eoc}", ++i, 10, ldec, 10, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 U<--     -->%#20-.*+0 U<--", i, 10, ldec, 10, -ldec));
		nb_test++;
	}
	i = 0;
	if (TEST_X)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%x --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%x<--     -->%x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%x<--     -->%x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40x<--     -->%40x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40x<--     -->%40x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40x<--     -->%+40x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40x<--     -->%+40x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0x<--     -->%0x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0x<--     -->%0x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40x<--     -->%.40x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40x<--     -->%.40x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3x<--     -->%.3x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3x<--     -->%.3x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20x<--     -->%40.20x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20x<--     -->%40.20x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40x<--     -->%-40x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40x<--     -->%-40x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+x<--     -->%+x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+x<--     -->%+x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20x<--     -->%+20x<--{eoc}", ++i, dec, -dec ));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20x<--     -->%+20x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*x<--     -->%*x<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*x<--     -->%*x<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20x<--     -->%*20x<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20x<--     -->%*20x<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*x<--     -->%.*x<--{eoc}", ++i, 20, dec, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*x<--     -->%.*x<--", i, 20, dec, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*x<--     -->%*.*x<--{eoc}", ++i, 40, 20, dec, 40, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*x<--     -->%*.*x<--", i, 40, 20, dec, 40, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#x<--     -->%#x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#x<--     -->%#x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% x<--     -->% x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% x<--     -->% x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% x<--     -->%     x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% x<--     -->%      x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020x<--     -->%020x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020x<--     -->%020x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020x<--     -->%-020x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020x<--     -->%-020x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020x<--     -->%+020x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020x<--     -->%+020x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020x<--     -->% 020x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020x<--     -->% 020x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.x<--     -->%.x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.x<--     -->%.x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5x<--     -->%.5x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5x<--     -->%.5x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20x<--     -->%-+20x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20x<--     -->%-+20x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20x<--     -->%-+020x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20x<--     -->%-+020x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#x<--     -->%#x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#x<--     -->%#x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.x<--     -->%#.x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.x<--     -->%#.x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10x<--     -->%#.10x<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10x<--     -->%#.10x<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 x<--     -->%#20-.*+0 x<--{eoc}", ++i, 10, dec, 10, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 x<--     -->%#20-.*+0 x<--", i, 10, dec, 10, -dec));
		nb_test++;
	}
	i = 0;
	if (TEST_LX)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%X --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%X<--     -->%X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%X<--     -->%X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40X<--     -->%40X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40X<--     -->%40X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40X<--     -->%+40X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40X<--     -->%+40X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0X<--     -->%0X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0X<--     -->%0X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40X<--     -->%.40X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40X<--     -->%.40X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3X<--     -->%.3X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3X<--     -->%.3X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20X<--     -->%40.20X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20X<--     -->%40.20X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40X<--     -->%-40X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40X<--     -->%-40X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+X<--     -->%+X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+X<--     -->%+X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20X<--     -->%+20X<--{eoc}", ++i, dec, -dec ));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20X<--     -->%+20X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*X<--     -->%*X<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*X<--     -->%*X<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20X<--     -->%*20X<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20X<--     -->%*20X<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*X<--     -->%.*X<--{eoc}", ++i, 20, dec, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*X<--     -->%.*X<--", i, 20, dec, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*X<--     -->%*.*X<--{eoc}", ++i, 40, 20, dec, 40, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*X<--     -->%*.*X<--", i, 40, 20, dec, 40, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#X<--     -->%#X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#X<--     -->%#X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% X<--     -->% X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% X<--     -->% X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% X<--     -->%     X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% X<--     -->%      X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020X<--     -->%020X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020X<--     -->%020X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020X<--     -->%-020X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020X<--     -->%-020X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020X<--     -->%+020X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020X<--     -->%+020X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020X<--     -->% 020X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020X<--     -->% 020X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.X<--     -->%.X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.X<--     -->%.X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5X<--     -->%.5X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5X<--     -->%.5X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20X<--     -->%-+20X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20X<--     -->%-+20X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20X<--     -->%-+020X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20X<--     -->%-+020X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#X<--     -->%#X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#X<--     -->%#X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.X<--     -->%#.X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.X<--     -->%#.X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10X<--     -->%#.10X<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10X<--     -->%#.10X<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 X<--     -->%#20-.*+0 X<--{eoc}", ++i, 10, dec, 10, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 X<--     -->%#20-.*+0 X<--", i, 10, dec, 10, -dec));
		nb_test++;
	}
	i = 0;
	if (TEST_P)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%p --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%p<--     -->%p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%p<--     -->%p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40p<--     -->%40p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40p<--     -->%40p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40p<--     -->%+40p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40p<--     -->%+40p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0p<--     -->%0p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0p<--     -->%0p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40p<--     -->%.40p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40p<--     -->%.40p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3p<--     -->%.3p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3p<--     -->%.3p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20p<--     -->%40.20p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20p<--     -->%40.20p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40p<--     -->%-40p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40p<--     -->%-40p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+p<--     -->%+p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+p<--     -->%+p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20p<--     -->%+20p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20p<--     -->%+20p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*p<--     -->%*p<--{eoc}", ++i, 40, str, 40, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*p<--     -->%*p<--", i, 40, str, 40, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20p<--     -->%*20p<--{eoc}", ++i, 40, str, 40, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20p<--     -->%*20p<--", i, 40, str, 40, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*p<--     -->%.*p<--{eoc}", ++i, 20, str, 20, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*p<--     -->%.*p<--", i, 20, str, 20, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*p<--     -->%*.*p<--{eoc}", ++i, 40, 20, str, 40, 20, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*p<--     -->%*.*p<--", i, 40, 20, str, 40, 20, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#p<--     -->%#p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#p<--     -->%#p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% p<--     -->% p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% p<--     -->% p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% p<--     -->%     p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% p<--     -->%      p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020p<--     -->%020p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020p<--     -->%020p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020p<--     -->%-020p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020p<--     -->%-020p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020p<--     -->%+020p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020p<--     -->%+020p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020p<--     -->% 020p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020p<--     -->% 020p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.p<--     -->%.p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.p<--     -->%.p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5p<--     -->%.5p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5p<--     -->%.5p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20p<--     -->%-+20p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20p<--     -->%-+20p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20p<--     -->%-+020p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20p<--     -->%-+020p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#p<--     -->%#p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#p<--     -->%#p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.p<--     -->%#.p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.p<--     -->%#.p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10p<--     -->%#.10p<--{eoc}", ++i, str, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10p<--     -->%#.10p<--", i, str, str));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 p<--     -->%#20-.*+0 p<--{eoc}", ++i, 10, str, 10, str));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 p<--     -->%#20-.*+0 p<--", i, 10, str, 10, str));
		nb_test++;
	}
	i = 0;
	if (TEST_F)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%f --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%f<--     -->%f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%f<--     -->%f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40f<--     -->%40f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40f<--     -->%40f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40f<--     -->%+40f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40f<--     -->%+40f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0f<--     -->%0f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0f<--     -->%0f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15f<--     -->%.15f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15f<--     -->%.15f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3f<--     -->%.3f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3f<--     -->%.3f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15f<--     -->%40.15f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15f<--     -->%40.15f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40f<--     -->%-40f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40f<--     -->%-40f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+f<--     -->%+f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+f<--     -->%+f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20f<--     -->%+20f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20f<--     -->%+20f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*f<--     -->%*f<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*f<--     -->%*f<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20f<--     -->%*20f<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20f<--     -->%*20f<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*f<--     -->%.*f<--{eoc}", ++i, 15, dou, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*f<--     -->%.*f<--", i, 15, dou, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*f<--     -->%*.*f<--{eoc}", ++i, 40, 15, dou, 40, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*f<--     -->%*.*f<--", i, 40, 15, dou, 40, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#f<--     -->%#f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#f<--     -->%#f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% f<--     -->% f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% f<--     -->% f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% f<--     -->%     f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% f<--     -->%      f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020f<--     -->%020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020f<--     -->%020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020f<--     -->%-020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020f<--     -->%-020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020f<--     -->%+020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020f<--     -->%+020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020f<--     -->% 020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020f<--     -->% 020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.f<--     -->%.f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.f<--     -->%.f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5f<--     -->%.5f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5f<--     -->%.5f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20f<--     -->%-+20f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20f<--     -->%-+20f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20f<--     -->%-+020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20f<--     -->%-+020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#f<--     -->%#f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#f<--     -->%#f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.f<--     -->%#.f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.f<--     -->%#.f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10f<--     -->%#.10f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10f<--     -->%#.10f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 f<--     -->%#20-.*+0 f<--{eoc}", ++i, 10, dou, 10, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 f<--     -->%#20-.*+0 f<--", i, 10, dou, 10, -dou));
		nb_test++;
	}
	i = 0;
	if (TEST_D)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%d --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%d<--     -->%d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%d<--     -->%d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40d<--     -->%40d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40d<--     -->%40d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40d<--     -->%+40d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40d<--     -->%+40d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0d<--     -->%0d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0d<--     -->%0d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40d<--     -->%.40d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40d<--     -->%.40d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3d<--     -->%.3d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3d<--     -->%.3d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20d<--     -->%40.20d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20d<--     -->%40.20d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40d<--     -->%-40d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40d<--     -->%-40d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+d<--     -->%+d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+d<--     -->%+d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20d<--     -->%+20d<--{eoc}", ++i, dec, -dec ));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20d<--     -->%+20d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*d<--     -->%*d<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*d<--     -->%*d<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20d<--     -->%*20d<--{eoc}", ++i, 40, dec, 40, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20d<--     -->%*20d<--", i, 40, dec, 40, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*d<--     -->%.*d<--{eoc}", ++i, 20, dec, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*d<--     -->%.*d<--", i, 20, dec, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*d<--     -->%*.*d<--{eoc}", ++i, 40, 20, dec, 40, 20, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*d<--     -->%*.*d<--", i, 40, 20, dec, 40, 20, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#d<--     -->%#d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#d<--     -->%#d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% d<--     -->% d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% d<--     -->% d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% d<--     -->%     d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% d<--     -->%      d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020d<--     -->%020d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020d<--     -->%020d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020d<--     -->%-020d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020d<--     -->%-020d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020d<--     -->%+020d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020d<--     -->%+020d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020d<--     -->% 020d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020d<--     -->% 020d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.d<--     -->%.d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.d<--     -->%.d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5d<--     -->%.5d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5d<--     -->%.5d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20d<--     -->%-+20d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20d<--     -->%-+20d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20d<--     -->%-+020d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20d<--     -->%-+020d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#d<--     -->%#d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#d<--     -->%#d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.d<--     -->%#.d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.d<--     -->%#.d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10d<--     -->%#.10d<--{eoc}", ++i, dec, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10d<--     -->%#.10d<--", i, dec, -dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 d<--     -->%#20-.*+0 d<--{eoc}", ++i, 10, dec, 10, -dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 d<--     -->%#20-.*+0 d<--", i, 10, dec, 10, -dec));
		nb_test++;
	}
	i = 0;
	if (TEST_LD)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%D --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%D<--     -->%D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%D<--     -->%D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40D<--     -->%40D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40D<--     -->%40D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40D<--     -->%+40D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40D<--     -->%+40D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0D<--     -->%0D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0D<--     -->%0D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40D<--     -->%.40D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40D<--     -->%.40D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3D<--     -->%.3D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3D<--     -->%.3D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20D<--     -->%40.20D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20D<--     -->%40.20D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40D<--     -->%-40D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40D<--     -->%-40D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+D<--     -->%+D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+D<--     -->%+D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20D<--     -->%+20D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20D<--     -->%+20D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*D<--     -->%*D<--{eoc}", ++i, 40, ldec, 40, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*D<--     -->%*D<--", i, 40, ldec, 40, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20D<--     -->%*20D<--{eoc}", ++i, 40, ldec, 40, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20D<--     -->%*20D<--", i, 40, ldec, 40, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*D<--     -->%.*D<--{eoc}", ++i, 20, ldec, 20, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*D<--     -->%.*D<--", i, 20, ldec, 20, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*D<--     -->%*.*D<--{eoc}", ++i, 40, 20, ldec, 40, 20, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*D<--     -->%*.*D<--", i, 40, 20, ldec, 40, 20, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#D<--     -->%#D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#D<--     -->%#D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% D<--     -->% D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% D<--     -->% D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% D<--     -->%     D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% D<--     -->%      D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020D<--     -->%020D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020D<--     -->%020D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020D<--     -->%-020D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020D<--     -->%-020D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020D<--     -->%+020D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020D<--     -->%+020D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020D<--     -->% 020D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020D<--     -->% 020D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.D<--     -->%.D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.D<--     -->%.D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5D<--     -->%.5D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5D<--     -->%.5D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20D<--     -->%-+20D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20D<--     -->%-+20D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20D<--     -->%-+020D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20D<--     -->%-+020D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#D<--     -->%#D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#D<--     -->%#D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.D<--     -->%#.D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.D<--     -->%#.D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10D<--     -->%#.10D<--{eoc}", ++i, ldec, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10D<--     -->%#.10D<--", i, ldec, -ldec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 D<--     -->%#20-.*+0 D<--{eoc}", ++i, 10, ldec, 10, -ldec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 D<--     -->%#20-.*+0 D<--", i, 10, ldec, 10, -ldec));
		nb_test++;
	}
	i = 0;
	if (TEST_C)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%c --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%c<--     -->%c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%c<--     -->%c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40c<--     -->%40c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40c<--     -->%40c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40c<--     -->%+40c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40c<--     -->%+40c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0c<--     -->%0c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0c<--     -->%0c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40c<--     -->%.40c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40c<--     -->%.40c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3c<--     -->%.3c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3c<--     -->%.3c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20c<--     -->%40.20c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20c<--     -->%40.20c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40c<--     -->%-40c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40c<--     -->%-40c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+c<--     -->%+c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+c<--     -->%+c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20c<--     -->%+20c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20c<--     -->%+20c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*c<--     -->%*c<--{eoc}", ++i, 40, c, 40, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*c<--     -->%*c<--", i, 40, c, 40, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20c<--     -->%*20c<--{eoc}", ++i, 40, c, 40, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20c<--     -->%*20c<--", i, 40, c, 40, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*c<--     -->%.*c<--{eoc}", ++i, 20, c, 20, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*c<--     -->%.*c<--", i, 20, c, 20, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*c<--     -->%*.*c<--{eoc}", ++i, 40, 20, c, 40, 20, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*c<--     -->%*.*c<--", i, 40, 20, c, 40, 20, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#c<--     -->%#c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#c<--     -->%#c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% c<--     -->% c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% c<--     -->% c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% c<--     -->%     c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% c<--     -->%      c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020c<--     -->%020c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020c<--     -->%020c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020c<--     -->%-020c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020c<--     -->%-020c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020c<--     -->%+020c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020c<--     -->%+020c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020c<--     -->% 020c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020c<--     -->% 020c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.c<--     -->%.c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.c<--     -->%.c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5c<--     -->%.5c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5c<--     -->%.5c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20c<--     -->%-+20c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20c<--     -->%-+20c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20c<--     -->%-+020c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20c<--     -->%-+020c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#c<--     -->%#c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#c<--     -->%#c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.c<--     -->%#.c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.c<--     -->%#.c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10c<--     -->%#.10c<--{eoc}", ++i, c, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10c<--     -->%#.10c<--", i, c, c));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 c<--     -->%#20-.*+0 c<--{eoc}", ++i, 10, c, 10, c));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 c<--     -->%#20-.*+0 c<--", i, 10, c, 10, c));
		nb_test++;
	}
	i = 0;
	if (TEST_LC)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%C --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%C<--     -->%C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%C<--     -->%C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40C<--     -->%40C<--{eoc}", ++i, 15477, 15477));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40C<--     -->%40C<--", i, 15477, 15477));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40C<--     -->%+40C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40C<--     -->%+40C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0C<--     -->%0C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0C<--     -->%0C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40C<--     -->%.40C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40C<--     -->%.40C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3C<--     -->%.3C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3C<--     -->%.3C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20C<--     -->%40.20C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20C<--     -->%40.20C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40C<--     -->%-40C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40C<--     -->%-40C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+C<--     -->%+C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+C<--     -->%+C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20C<--     -->%+20C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20C<--     -->%+20C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*C<--     -->%*C<--{eoc}", ++i, 40, 177, 40, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*C<--     -->%*C<--", i, 40, 177, 40, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20C<--     -->%*20C<--{eoc}", ++i, 40, 177, 40, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20C<--     -->%*20C<--", i, 40, 177, 40, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*C<--     -->%.*C<--{eoc}", ++i, 20, 177, 20, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*C<--     -->%.*C<--", i, 20, 177, 20, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*C<--     -->%*.*C<--{eoc}", ++i, 40, 20, 177, 40, 20, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*C<--     -->%*.*C<--", i, 40, 20, 177, 40, 20, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#C<--     -->%#C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#C<--     -->%#C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% C<--     -->% C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% C<--     -->% C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% C<--     -->%     C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% C<--     -->%      C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020C<--     -->%020C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020C<--     -->%020C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020C<--     -->%-020C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020C<--     -->%-020C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020C<--     -->%+020C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020C<--     -->%+020C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020C<--     -->% 020C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020C<--     -->% 020C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.C<--     -->%.C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.C<--     -->%.C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5C<--     -->%.5C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5C<--     -->%.5C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20C<--     -->%-+20C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20C<--     -->%-+20C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20C<--     -->%-+020C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20C<--     -->%-+020C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#C<--     -->%#C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#C<--     -->%#C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.C<--     -->%#.C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.C<--     -->%#.C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10C<--     -->%#.10C<--{eoc}", ++i, 177, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10C<--     -->%#.10C<--", i, 177, 177));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 C<--     -->%#20-.*+0 C<--{eoc}", ++i, 10, 177, 10, 177));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 C<--     -->%#20-.*+0 C<--", i, 10, 177, 10, 177));
		nb_test++;
	}
	i = 0;
	if (TEST_E)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%e --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%e<--     -->%e<--{eoc}", ++i, 0.0025, -0.0025));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%e<--     -->%e<--", i, 0.0025, -0.0025));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40e<--     -->%40e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40e<--     -->%40e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40e<--     -->%+40e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40e<--     -->%+40e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0e<--     -->%0e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0e<--     -->%0e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15e<--     -->%.15e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15e<--     -->%.15e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3e<--     -->%.3e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3e<--     -->%.3e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15e<--     -->%40.15e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15e<--     -->%40.15e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40e<--     -->%-40e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40e<--     -->%-40e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+e<--     -->%+e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+e<--     -->%+e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20e<--     -->%+20e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20e<--     -->%+20e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*e<--     -->%*e<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*e<--     -->%*e<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20e<--     -->%*20e<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20e<--     -->%*20e<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*e<--     -->%.*e<--{eoc}", ++i, 15, dou, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*e<--     -->%.*e<--", i, 15, dou, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*e<--     -->%*.*e<--{eoc}", ++i, 40, 15, dou, 40, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*e<--     -->%*.*e<--", i, 40, 15, dou, 40, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#e<--     -->%#e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#e<--     -->%#e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% e<--     -->% e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% e<--     -->% e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% e<--     -->%     e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% e<--     -->%      e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020e<--     -->%020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020e<--     -->%020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020e<--     -->%-020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020e<--     -->%-020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020e<--     -->%+020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020e<--     -->%+020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020e<--     -->% 020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020e<--     -->% 020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.e<--     -->%.e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.e<--     -->%.e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5e<--     -->%.5e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5e<--     -->%.5e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20e<--     -->%-+20e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20e<--     -->%-+20e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20e<--     -->%-+020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20e<--     -->%-+020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#e<--     -->%#e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#e<--     -->%#e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.e<--     -->%#.e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.e<--     -->%#.e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10e<--     -->%#.10e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10e<--     -->%#.10e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 e<--     -->%#20-.*+0 e<--{eoc}", ++i, 10, dou, 10, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 e<--     -->%#20-.*+0 e<--", i, 10, dou, 10, -dou));
		nb_test++;
	}
	i = 0;
	if (TEST_LE)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%E --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%E<--     -->%E<--{eoc}", ++i, 0.0025, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%E<--     -->%E<--", i, 0.0025, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40E<--     -->%40E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40E<--     -->%40E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40E<--     -->%+40E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40E<--     -->%+40E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0E<--     -->%0E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0E<--     -->%0E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15E<--     -->%.15E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15E<--     -->%.15E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3E<--     -->%.3E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3E<--     -->%.3E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15E<--     -->%40.15E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15E<--     -->%40.15E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40E<--     -->%-40E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40E<--     -->%-40E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+E<--     -->%+E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+E<--     -->%+E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20E<--     -->%+20E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20E<--     -->%+20E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*E<--     -->%*E<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*E<--     -->%*E<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20E<--     -->%*20E<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20E<--     -->%*20E<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*E<--     -->%.*E<--{eoc}", ++i, 15, dou, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*E<--     -->%.*E<--", i, 15, dou, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*E<--     -->%*.*E<--{eoc}", ++i, 40, 15, dou, 40, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*E<--     -->%*.*E<--", i, 40, 15, dou, 40, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#E<--     -->%#E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#E<--     -->%#E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% E<--     -->% E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% E<--     -->% E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% E<--     -->%     E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% E<--     -->%      E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020E<--     -->%020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020E<--     -->%020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020E<--     -->%-020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020E<--     -->%-020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020E<--     -->%+020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020E<--     -->%+020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020E<--     -->% 020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020E<--     -->% 020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.E<--     -->%.E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.E<--     -->%.E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5E<--     -->%.5E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5E<--     -->%.5E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20E<--     -->%-+20E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20E<--     -->%-+20E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20E<--     -->%-+020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20E<--     -->%-+020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#E<--     -->%#E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#E<--     -->%#E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.E<--     -->%#.E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.E<--     -->%#.E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10E<--     -->%#.10E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10E<--     -->%#.10E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 E<--     -->%#20-.*+0 E<--{eoc}", ++i, 10, dou, 10, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 E<--     -->%#20-.*+0 E<--", i, 10, dou, 10, -dou));
		nb_test++;
	}
	i = 0;
	if (TEST_G)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%g --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%g<--     -->%g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%g<--     -->%g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40g<--     -->%40g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40g<--     -->%40g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40g<--     -->%+40g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40g<--     -->%+40g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0g<--     -->%0g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0g<--     -->%0g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15g<--     -->%.15g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15g<--     -->%.15g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3g<--     -->%.3g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3g<--     -->%.3g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15g<--     -->%40.15g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15g<--     -->%40.15g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40g<--     -->%-40g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40g<--     -->%-40g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+g<--     -->%+g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+g<--     -->%+g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20g<--     -->%+20g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20g<--     -->%+20g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*g<--     -->%*g<--{eoc}", ++i, 15, nb_g, 15, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*g<--     -->%*g<--", i, 15, nb_g, 15, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20g<--     -->%*20g<--{eoc}", ++i, 40, nb_g, 40, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20g<--     -->%*20g<--", i, 40, nb_g, 40, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*g<--     -->%.*g<--{eoc}", ++i, 15, nb_g, 15, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*g<--     -->%.*g<--", i, 15, nb_g, 15, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*g<--     -->%*.*g<--{eoc}", ++i, 40, 15, nb_g, 40, 15, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*g<--     -->%*.*g<--", i, 40, 15, nb_g, 40, 15, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#g<--     -->%#g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#g<--     -->%#g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% g<--     -->% g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% g<--     -->% g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% g<--     -->%     g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% g<--     -->%      g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020g<--     -->%020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020g<--     -->%020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020g<--     -->%-020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020g<--     -->%-020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020g<--     -->%+020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020g<--     -->%+020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020g<--     -->% 020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020g<--     -->% 020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.g<--     -->%.g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.g<--     -->%.g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5g<--     -->%.5g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5g<--     -->%.5g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20g<--     -->%-+20g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20g<--     -->%-+20g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20g<--     -->%-+020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20g<--     -->%-+020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#g<--     -->%#g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#g<--     -->%#g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.g<--     -->%#.g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.g<--     -->%#.g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10g<--     -->%#.10g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10g<--     -->%#.10g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 g<--     -->%#20-.*+0 g<--{eoc}", ++i, 10, nb_g, 10, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 g<--     -->%#20-.*+0 g<--", i, 10, nb_g, 10, -nb_g));
		nb_test++;
	}
	i = 0;
	if (TEST_LG)
	{

	}
	i = 0;
	if (TEST_B)
	{
		dec = 42;
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%b --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40b<---{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*b<--{eoc}", ++i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20b<--{eoc}", ++i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*b<--{eoc}", ++i, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*b<--{eoc}", ++i, 40, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 b<--{eoc}", ++i, 10, dec));
		nb_test++;
	}
	i = 0;
	if (TEST_NO) // Si un caractere inatendu ou pas de specifier
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST NO --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*%<--{eoc}", ++i, 40, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*%<--", i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20%<--{eoc}", ++i, 40, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20%<--", i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*%<--{eoc}", ++i, 20, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*%<--", i, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*%<--{eoc}", ++i, 40, 20, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*%<--", i, 40, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% %<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% %<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% %<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% %<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 %<--{eoc}", ++i, 10, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 %<--", i, 10, dec));
		nb_test++;
	}
	i = 0;
	if (TEST_COLOR)
	{
		ft_printf("{all}");
	}
	if (TEST_BAZAR)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST BAZAR --{eoc}"));
		
		ft_printf("\n\t{green}¤ Easy ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf(""), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf(""), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("\n"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("\n"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("test\n"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("test\n"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("1234"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("1234"), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ Wrong Flags ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% "), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% "), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% h"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% h"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%Z"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%Z"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% hZ"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% hZ"), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ %% ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%05%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%05%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-05%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-05%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% hZ%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% hZ%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.0%"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.0%"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% Z", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% Z", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% Z ", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% Z ", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% Z%s", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% Z%s", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%%", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%%", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%   %", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%   %", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%000   %", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%000   %", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%%%", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%%%", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%%   %", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%%   %", "test"), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ x X ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%x", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%x", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%X", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%X", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%x", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%x", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%X", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%X", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%x", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%x", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%X", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%X", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%x", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%x", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%X", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%X", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%X", "test"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%X", "test"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%10x", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%10x", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%10X", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%10X", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-10x", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-10x", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-10X", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-10X", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lx", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lx", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llX", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%llX", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hx", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hx", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhX", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhX", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", -4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", -4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", -4294967297), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", -4294967297), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llX", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%llX", 9223372036854775807), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llX", 9223372036854775808), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%llX", 9223372036854775808), i);
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%010X", 542), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%010X", 542), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-15X", 542), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-15X", 542), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%2X", 542), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%2X", 542), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.2X", 5427), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.2X", 5427), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5.2X", 5427), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5.2X", 5427), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#X", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#X", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ll#X", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ll#X", 9223372036854775807), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#llX", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#llX", 9223372036854775807), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#x", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#x", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#x", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#x", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#X", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#X", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#8x", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#8x", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#08x", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#08x", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#-08x", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#-08x", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#.x %#.0x", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#.x %#.0x", 0, 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.x %.0x", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.x %.0x", 0, 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5.x %5.0x", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5.x %5.0x", 0, 0), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ String ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s", "abc"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s", "abc"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s", "This is a string"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s", "This is a string"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s ", "This is a string"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s ", "This is a string"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s  ", "This is a string"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s  ", "This is a string"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("This is a %s", "string"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("This is a %s", "string"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("Line Feed %s", "\n"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("Line Feed %s", "\n"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%10s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%10s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%010s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%010s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.2s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.2s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5.2s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5.2s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%10s is a string", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%10s is a string", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.2s is a string", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.2s is a string", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5.2s is a string", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5.2s is a string", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-10s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-10s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-010s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-010s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-.2s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-.2s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5.2s is a string", "This"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5.2s is a string", "This"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-10s is a string", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-10s is a string", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-.2s is a string", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-.2s is a string", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5.2s is a string", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5.2s is a string", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s %s", "This", "is"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s %s", "This", "is"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s %s %s", "This", "is", "a"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s %s %s", "This", "is", "a"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s %s %s %s", "This", "is", "a", "multi"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s %s %s %s", "This", "is", "a", "multi"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s %s %s %s string. gg!", "Thsi", "is", "a", "multi", "string"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s %s %s %s string. gg!", "Thsi", "is", "a", "multi", "string"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s%s%s%s%s", "This", "is", "a", "multi", "string"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s%s%s%s%s", "This", "is", "a", "multi", "string"), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.2c", NULL), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.2c", NULL), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%s %s", NULL, "string"), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%s %s", NULL, "string"), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ Character ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%c", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%c", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5c", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5c", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%05c", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%05c", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5c", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5c", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%c", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%c", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%2c", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%2c", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("null %c and text", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("null %c and text", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% c", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% c", 0), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ Octal ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%o", 40), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%o", 40), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5o", 41), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5o", 41), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%05o", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%05o", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5o", 2500), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5o", 2500), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#6o", 2500), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#6o", 2500), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-#6o", 2500), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-#6o", 2500), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-05o", 2500), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-05o", 2500), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5.10o", 2500), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5.10o", 2500), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-10.5o", 2500), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-10.5o", 2500), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%o", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%o", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.o %.0", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.o %.0", 0, 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5.o %5.0", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5.o %5.0", 0, 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%#.o %#.0", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%#.o %#.0", 0, 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.10o", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.10o", 42), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ Integer ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% Z", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% Z", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", 1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", 1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("The %d", 1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("The %d", 1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d is one", 1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d is one", 1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", -1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", -1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", -4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", -4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", 2147483647), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", 2147483647), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", 2147483648), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", 2147483648), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", -2147483648), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", -2147483648), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", -2147483649), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", -2147483649), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%0 d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%0 d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%0 d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%0 d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% 0d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% 0d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% 0d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% 0d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+d", -42), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+d", 4242424242424242424242), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%+d", 4242424242424242424242), i);
		//nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+d", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+d", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% +d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% +d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% +d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% +d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+ d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+ d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+ d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+ d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%  +d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%  +d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%  +d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%  +d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+  d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+  d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+  d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+  d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% ++d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% ++d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% ++d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% ++d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%++ d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%++ d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%++ d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%++ d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%0d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%0d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%00d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%00d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5+d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5+d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%05d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%05d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%0+5d", 24), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%0+5d", 24), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5+d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5+d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%05d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%05d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%0+5d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%0+5d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5+d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5+d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-05d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-05d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-0+5d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-0+5d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-5+d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-5+d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-05d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-05d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-0+5d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-0+5d", -42), i);
		nb_test++;

		ft_printf("\n\t{green}¤ Integer Short ¤{eoc}\n\n");
		
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", 32767), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hd", 32767), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", −32768), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%hd", −32768), i);
		//nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", 32768), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hd", 32768), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", -32769), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hd", -32769), i);
		nb_test++;
		
		ft_printf("\n\t{green}¤ Signed Char ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", 127), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", 127), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", 128), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", 128), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", -128), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", -128), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", -129), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", -129), i);
		nb_test++;

		ft_printf("\n\t{green}¤ Integer Long ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", 2147483647), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ld", 2147483647), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", –2147483648), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%ld", –2147483648), i);
		//nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", 2147483648), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ld", 2147483648), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", –2147483649), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%ld", –2147483649), i);
		//nb_test++;

		ft_printf("\n\t{green}¤ Integer Long Long ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lld", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lld", 9223372036854775807), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lld", -9223372036854775808), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%lld", -9223372036854775808), i);
		//nb_test++;

		ft_printf("\n\t{green}¤ Integer Intmax_t ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jd", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jd", 9223372036854775807), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jd", –9223372036854775808), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%jd", –9223372036854775808), i);
		//nb_test++;

		ft_printf("\n\t{green}¤ Integer Size_t ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", -1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", -1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d", 1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d", 1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d %d", 1, -2), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d %d", 1, -2), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d %d %d", 1, -2, 33), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d %d %d", 1, -2, 33), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d %d %d %d", 1, -2, 33, 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d %d %d %d", 1, -2, 33, 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%d %d %d %d gg!", 1, -2, 33, 42, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%d %d %d %d gg!", 1, -2, 33, 42, 0), i);
		nb_test++;

		ft_printf("\n\t{green}¤ Integer Accuracy ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%4.15d", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%4.15d", 42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.2d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.2d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.10d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.10d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%10.5d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%10.5d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-10.5d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-10.5d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% 10.5d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% 10.5d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+10.5d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+10.5d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-+10.5d", 4242), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-+10.5d", 4242), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%03.2d", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%03.2d", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%03.2d", 1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%03.2d", 1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%03.2d", -1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%03.2d", -1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.10d", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.10d", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.d %.0d", 42, 43), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.d %.0d", 42, 43), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.d %.0d", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.d %.0d", 0, 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5.d %5.0d", 0, 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5.d %5.0d", 0, 0), i);
		nb_test++;

		ft_printf("\n\t{green}¤ Unsigned ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%u", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%u", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%u", 1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%u", 1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%u", -1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%u", -1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%u", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%u", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%u", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%u", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%-15u", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%-15u", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%5u", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%5u", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%15u", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%15u", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%015u", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%015u", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("% u", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("% u", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%+u", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%+u", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lu", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lu", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lu", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lu", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lu", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lu", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llu", 4999999999), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%llu", 4999999999), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ju", 4999999999), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ju", 4999999999), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ju", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ju", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%U", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%U", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hU", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hU", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%U", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%U", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%.5u", 42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%.5u", 42), i);
		nb_test++;

		ft_printf("\n\t{green}¤ Mistaken ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zhd", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zhd", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jzd", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jzd", 9223372036854775807), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jhd", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jhd", 9223372036854775807), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lhl", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lhl", 9223372036854775807), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lhlz", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lhlz", 9223372036854775807), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zj", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zj", 9223372036854775807), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lhh", 2147483647), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lhh", 2147483647), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhld", 128), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhld", 128), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%####0000 33..1..#00d", 256), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%####0000 33..1..#00d", 256), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%###-#0000 33...12..#0+0d", 256), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%###-#0000 33...12..#0+0d", 256), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%####0000 33..1u", 256), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%####0000 33..1u", 256), i);
		nb_test++;
	}
	ft_printf("\nNombre de test effectue : {6}%d{eoc}.\n", nb_test);
	ft_strdel(&str);
	if (INFINITY)
		while (1)
			;
	return (0);
}
