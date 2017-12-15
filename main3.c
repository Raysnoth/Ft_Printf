/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:11:05 by gauffret          #+#    #+#             */
/*   Updated: 2017/12/13 16:00:34 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <limits.h>
#include <ft_printf.h>

#define my_printf ft_printf

int		main()
{
	char		str[] = "jd jd ksj dkj djk djk djk";

	my_printf("\n");

	my_printf(" -- %d\n", my_printf("chaine de test"));
	printf(" -- %d\n", printf("chaine de test"));

	my_printf("\n1) -----------------------------------\n\n");

	my_printf(" -- %d\n",my_printf("%00-0.-004d", 42));
	printf(" -- %d\n", printf("%00-0.-004d", 42));
	my_printf(" -- %d\n",my_printf("%.0x", 42));
	printf(" -- %d\n", printf("%.0x", 42));
	my_printf(" -- %i\n",my_printf("%#0-134.-2X", 42));
	printf(" -- %i\n", printf("%#0-134.-2X", 42));
	my_printf(" -- %d\n",my_printf("%#0-134.-135X", 42));
	printf(" -- %d\n", printf("%#0-134.-135X", 42));
	my_printf(" -- %i\n",my_printf("%-+#00d", -42));
	printf(" -- %i\n", printf("%-+#00d", -42));

	my_printf("\n2) -----------------------------------\n\n");

	my_printf(" -- %d\n",my_printf("%00-0.004u", -42));
	printf(" -- %d\n",printf("%00-0.004u", -42));

	my_printf("\n3) -----------------------------------\n\n");

	my_printf(" -- %d\n",my_printf("%u", -0));
	printf(" -- %d\n",printf("%u", -0));
	my_printf(" -- %d\n",my_printf("%#5x\npouet", 42));
	printf(" -- %d\n",printf("%#5x\npouet", 42));
	my_printf(" -- %i\n",my_printf("%%%%%d", 42));
	printf(" -- %i\n",printf("%%%%%d", 42));
	my_printf(" -- %d\n",my_printf("%%%%%d", 42));
	printf(" -- %d\n",printf("%%%%%d", 42));
	my_printf(" -- %d\n",my_printf("%#5x\npouet", 42));
	printf(" -- %d\n",printf("%#5x\npouet", 42));
	my_printf(" -- %i\n",my_printf("%%%%%d", 42));
	printf(" -- %i\n",printf("%%%%%d", 42));
	my_printf(" -- %d\n",my_printf("0.0o", 42));
	printf(" -- %d\n",printf("0.0o", 42));

	my_printf("\n4) -----------------------------------\n\n");

	my_printf(" -- %d\n",my_printf("%%d", 42));
	printf(" -- %d\n",printf("%%d", 42));
	my_printf(" -- %d\n",my_printf("%.0llhd", -42));
	printf(" -- %d\n",printf("%.0llhd", -42));
	my_printf(" -- %d\n",my_printf("%d", str));
	printf(" -- %d\n",printf("%d", str));
	my_printf(" -- %d\n", my_printf("te:%.5s:%-32.14s$", "chaine de test", "terwe"));
	printf(" -- %d\n", printf("te:%.5s:%-32.14s$", "chaine de test", "terwe"));
	my_printf(" -- %d\n", my_printf("te:%#.5s:%0#-32.14s$", "ch", "terwe"));
	printf(" -- %d\n", printf("te:%#.5s:%0#-32.14s$", "ch", "terwe"));
	my_printf(" -- %d\n", my_printf("%#.5s:%0#-32.14s$", "ch", "terwe"));
	printf(" -- %d\n", printf("%#.5s:%0#-32.14s$", "ch", "terwe"));

	my_printf("\n5) -----------------------------------\n\n");

	my_printf(" -- %d\n", my_printf("%045s:%#032.1s$", "ch", "terwe"));
	printf(" -- %d\n", printf("%045s:%#032.1s$", "ch", "terwe"));
	my_printf(" -- %d\n", my_printf("%045s:%#0-32.1s$", "ch", "terwe"));
	printf(" -- %d\n", printf("%045s:%#0-32.1s$", "ch", "terwe"));
	my_printf(" -- %d\n", my_printf("%c$", 'h'));
	printf(" -- %d\n", printf("%c$", 'h'));

	my_printf("\n6) -----------------------------------\n\n");


	my_printf(" -- %d\n", my_printf("%#.1d:%0#-32.0d$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("%#.1d:%0#-32.0d$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%#-56.1d:%0#-3.14d$", UINT_MAX, UINT_MAX));
	printf(" -- %d\n", printf("%#-56.1d:%0#-3.14d$", UINT_MAX, UINT_MAX));

	my_printf("\n7) -----------------------------------\n\n");

	my_printf(" -- %d\n", my_printf("% +.16d:%0# +32.0d$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("% +.16d:%0# +32.0d$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%-.1d:%0#-32.0d$", UINT_MAX, UINT_MAX));
	printf(" -- %d\n", printf("%-.1d:%0#-32.0d$", UINT_MAX, UINT_MAX));
	my_printf(" -- %d\n", my_printf("%#.1d:%0#-32.0d$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("%#.1d:%0#-32.0d$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%#.1d:%0#-32.0d$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("%#.1d:%0#-32.0d$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%#-56.1x:%0#-3.14x$", UINT_MAX, UINT_MAX));
	printf(" -- %d\n", printf("%#-56.1x:%0#-3.14x$", UINT_MAX, UINT_MAX));

	my_printf("\n8) -----------------------------------\n\n");

	my_printf(" -- %d\n", my_printf("% +.16X:%0# +32.0X$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("% +.16X:%0# +32.0X$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%-.1X:%0#-32.0X$", UINT_MAX, UINT_MAX));
	printf(" -- %d\n", printf("%-.1X:%0#-32.0X$", UINT_MAX, UINT_MAX));
	my_printf(" -- %d\n", my_printf("%#.1X:%0#-32.0X$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("%#.1X:%0#-32.0X$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%#.1u:%0#-32.0u$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("%#.1u:%0#-32.0u$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%#-56.1o:%0#-3.14o$", UINT_MAX, UINT_MAX));
	printf(" -- %d\n", printf("%#-56.1o:%0#-3.14o$", UINT_MAX, UINT_MAX));
	my_printf(" -- %d\n", my_printf("% +.16o:%0# +32.0o$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("% +.16o:%0# +32.0o$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%#-.1o:%0#-32.0o$", UINT_MAX, UINT_MAX));
	printf(" -- %d\n", printf("%#-.1o:%0#-32.0o$", UINT_MAX, UINT_MAX));
	my_printf(" -- %d\n", my_printf("%#23.31u:%0#-32.0u$", INT_MIN, INT_MAX));
	printf(" -- %d\n", printf("%#23.31u:%0#-32.0u$", INT_MIN, INT_MAX));
	my_printf(" -- %d\n", my_printf("%#23.31u:%0# -13.0u$",0, 0));
	printf(" -- %d\n", printf("%#23.31u:%0# -13.0u$",0, 0));
	my_printf(" -- %d\n", my_printf("%#44.1X:%0#-32.0X$", 0, 0));
	printf(" -- %d\n", printf("%#44.1X:%0#-32.0X$", 0, 0));
	my_printf(" -- %d\n", my_printf("%1d:%0-2.6d$", 0, 0));
	printf(" -- %d\n", printf("%1d:%0-2.6d$", 0, 0));

	my_printf("\n9) -----------------------------------\n\n");

	my_printf(" -- %d\n", my_printf("% +.16llX:%0# +32.0llX%s$", LLONG_MIN, LLONG_MAX,"hsjkdfh"));
	printf(" -- %d\n", printf("% +.16llX:%0# +32.0llX%s$", LLONG_MIN, LLONG_MAX,"hsjkdfh"));	
	my_printf(" -- %d\n", my_printf("%-.1llX:%0#-32.0llX$", LLONG_MIN, ULLONG_MAX));
	printf(" -- %d\n", printf("%-.1llX:%0#-32.0llX$", LLONG_MIN, ULLONG_MAX));
	my_printf(" -- %d\n", my_printf("%#.1lld:%0#-32.0lld$", LLONG_MIN, ULLONG_MAX));
	printf(" -- %d\n", printf("%#.1lld:%0#-32.0lld$", LLONG_MIN, ULLONG_MAX));
	my_printf(" -- %d\n", my_printf("%#.1llu:%0#-32.0llu$", LLONG_MIN, ULLONG_MAX));
	printf(" -- %d\n", printf("%#.1llu:%0#-32.0llu$", LLONG_MIN, ULLONG_MAX));
	my_printf(" -- %d\n", my_printf("%#-56.1llo:%0#-3.14llo$", LLONG_MIN, LLONG_MAX));
	printf(" -- %d\n", printf("%#-56.1llo:%0#-3.14llo$", LLONG_MIN, LLONG_MAX));
	my_printf(" -- %d\n", my_printf("% +.1ll6o:%0# +32.0llo$", LLONG_MIN, LLONG_MAX));
	printf(" -- %d\n", printf("% +.1ll6o:%0# +32.0llo$", LLONG_MIN, LLONG_MAX));
	my_printf(" -- %d\n", my_printf("%#-.1llo:%0#-3ll2.0llo$", LLONG_MIN, LLONG_MAX));
	printf(" -- %d\n", printf("%#-.1llo:%0#-3ll2.0llo$", LLONG_MIN, LLONG_MAX));
	my_printf(" -- %d\n", my_printf("%#23.31u:%0#-32.0u$", LLONG_MIN, LLONG_MAX));
	printf(" -- %d\n", printf("%#23.31u:%0#-32.0u$", LLONG_MIN, LLONG_MAX));
	my_printf(" -- %d\n", my_printf("%#23.31llu:%0# -13.0llu$",0, 0));
	printf(" -- %d\n", printf("%#23.31llu:%0# -13.0llu$",0, 0));
	//my_printf(" -- %d\n", my_printf("%#44.1llX:%0#-32.0llX$", 0, 0));
	//printf(" -- %d\n", printf("%#44.1llX:%0#-32.0llX$", 0, 0));
	my_printf(" -- %d\n", my_printf("%1lld:%0-2.6lld$", 0, 0));
	printf(" -- %d\n", printf("%1lld:%0-2.6lld$", 0, 0));

	my_printf("\n10) ----------------------------------\n\n");

	char *a = 0;
	my_printf(" -- %d\n", my_printf("%s", a));
	printf(" -- %d\n", printf("%s", a));
	a = malloc(sizeof(*a));
	my_printf(" -- %d\n", my_printf("%p", a));
	printf(" -- %d\n", printf("%p", a));
	my_printf(" -- %d\n", my_printf("%p", a));
	printf(" -- %d\n", printf("%p", a));
	my_printf("NEW TEST\n");
	my_printf(" -- %d\n", my_printf(""));
	printf(" -- %d\n", printf(""));
	my_printf(" -- %d\n", my_printf(0));
	printf("real == segfault\n");
	//printf(" -- %d\n", printf(0));
	my_printf(" -- %d\n", my_printf("%-+1~sdf$"));	    
	printf(" -- %d\n", printf("%-+1~sdf$"));	    
	char c;

	my_printf("\n11) ----------------------------------\n\n");

	c = '$';
	free(a);
	my_printf(" -- %d\n", my_printf("%-+#.3c&", c));
	printf(" -- %d\n", printf("%-+#.3c&", c));
	my_printf(" -- %d\n", my_printf("%-#6.2c", c));
	printf(" -- %d\n", printf("%-#6.2c", c));
	my_printf(" -- %d\n", my_printf("%-4.5c", c));
	printf(" -- %d\n", printf("%-4.5c", c));
	my_printf(" -- %d\n", my_printf("%3.4c", c));
	printf(" -- %d\n", printf("%3.4c", c));
	my_printf(" -- %d\n", my_printf("%.4c", c));
	printf(" -- %d\n", printf("%.4c", c));
	my_printf(" -- %d\n", my_printf("%45c", c));
	printf(" -- %d\n", printf("%45c", c));
	my_printf(" -- %d\n", my_printf("%-+#.3p&", a));
	printf(" -- %d\n", printf("%-+#.3p&", a));
	my_printf(" -- %d\n", my_printf("%-#6.2p&", a));
	printf(" -- %d\n", printf("%-#6.2p&", a));
	my_printf(" -- %d\n", my_printf("%-42.52p&", a));
	printf(" -- %d\n", printf("%-42.52p&", a));
	my_printf(" -- %d\n", my_printf("%32.24p&", a));
	printf(" -- %d\n", printf("%32.24p&", a));

	my_printf("\n12) ----------------------------------\n\n");

	my_printf(" -- %d\n", my_printf("[%.0c]", c));
	printf(" -- %d\n", printf("[%.0c]", c));
	my_printf(" -- %d\n", my_printf("[%-010c]", c));
	printf(" -- %d\n", printf("[%-010c]", c));
	my_printf(" -- %d\n", my_printf("[%-0.3c]", c));
	printf(" -- %d\n", printf("[%-0.3c]", c));
	my_printf(" -- %d\n", my_printf("[%-010.3c]", c));
	printf(" -- %d\n", printf("[%-010.3c]", c));
	my_printf(" -- %d\n", my_printf("[%.0c]", c));
	printf(" -- %d\n", printf("[%.0c]", c));

	my_printf("\n13) ----------------------------------\n\n");

	my_printf(" -- %d\n", my_printf("[%s]", str));
	printf(" -- %d\n", printf("[%s]", str));
	my_printf(" -- %d\n", my_printf("[%.0s]", str));
	printf(" -- %d\n", printf("[%.0s]", str));
	my_printf(" -- %d\n", my_printf("[%10.4s]", str));
	printf(" -- %d\n", printf("[%10.4s]", str));
	my_printf(" -- %d\n", my_printf("[%0.0s]", str));
	printf(" -- %d\n", printf("[%0.0s]", str));
	my_printf(" -- %d\n", my_printf("[%.1s]", str));
	printf(" -- %d\n", printf("[%.1s]", str));

	my_printf("\n14) ----------------------------------\n\n");

	my_printf(" -- %d\n", my_printf("%-+#.6hhd|%s", c, str));
	printf(" -- %d\n", printf("%-+#.6hhd|%s", c, str));
	my_printf(" -- %d\n", my_printf("%-#6.2hhd|%s", c, str));
	printf(" -- %d\n", printf("%-#6.2hhd|%s", c, str));
	my_printf(" -- %d\n", my_printf("%-4.5hhd|%s", c, str));
	printf(" -- %d\n", printf("%-4.5hhd|%s", c, str));

	my_printf("\n15) ----------------------------------\n\n");

	my_printf("\nShort and long strings tests\n");
	my_printf(" -- %d\n", my_printf("%-+#.6hhs|%s", str, str));
	printf(" -- %d\n", printf("%-+#.6hhs|%s", str, str));
	my_printf(" -- %d\n", my_printf("%-#6.2lls|%hs", str, str));
	printf(" -- %d\n", printf("%-#6.2lls|%hs", str, str));
	//my_printf(" -- %d\n", my_printf("%-4.5lls|%ls", str, str));
	//printf(" -- %d\n", printf("%-4.5lls|%ls", str, str));

	my_printf("\n16) ----------------------------------\n\n");

	char *str2;
	str2 = ft_strdup("jdfhjkh");
	str2[2] = 12;
	my_printf("%d\n", my_printf("%-+#.6hhS|%S\n", str2, str2));
	my_printf("%d\n", my_printf("%-#6.2hhS|%S\n", str2, str2));
	my_printf("%d\n", my_printf("%-4.5hhS|%S", str2, str2));

	my_printf("\n");
	my_printf("\n17) ----------------------------------\n\n");

	my_printf("%d\n", my_printf("%-+#.0hhS|%S\n", str2, str2));
	my_printf("%d\n", my_printf("%-#6.0hhS|%S\n", str2, str2));
	my_printf("%d\n", my_printf("%-0.0hhS|%S", str2, str2));

	my_printf("\n18) ----------------------------------\n\n");

	my_printf("CHAR ATACK\n");
	c = 0;
	my_printf("[%.0c]\n", c);
	c = 127;
	my_printf("[%-010c]\n", c);
	my_printf("[%-0.3c]\n", c);
	c = '@';
	my_printf("[%-010.3c]\n", c);
	my_printf("[%.0c]\n", c);
	
	free(str2);

	return (1);
}

