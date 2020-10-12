/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 13:31:24 by roms              #+#    #+#             */
/*   Updated: 2020/10/13 01:15:55 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//includes:

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	int fd0;

	fd0 = 1;


/*	//ft_putchar_fd
	char c0;

	c0 = 'z';
	ft_putstr_fd("ft_putchar_fd of 'z' shows = ", fd0);
	ft_putchar_fd(c0, fd0);


	ft_putchar_fd('\n', fd0);
	ft_putchar_fd('\n', fd0);

	//ft_putnbr_fd
	int n0;

	n0 = -2147483648;
	ft_putstr_fd("ft_putnbr_fd of ", fd0);
	ft_putnbr_fd(n0, fd0);
	ft_putstr_fd(" shows = ", fd0);
	ft_putnbr_fd(n0, fd0);


	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
*/
	//ft_strlen
	char *str0;

	str0 = "Hello World!";
	ft_putstr_fd("ft_strlen of '", fd0);
	ft_putstr_fd(str0, fd0);
	ft_putstr_fd("' shows = ", fd0);
	ft_putnbr_fd(ft_strlen(str0), fd0);


	ft_putchar_fd('\n', fd0);
	ft_putchar_fd('\n', fd0);

/*	//ft_putstr_fd
	ft_putstr_fd("ft_putstr_fd of '", fd0);
	ft_putstr_fd(str0, fd0);
	ft_putstr_fd("' shows = ", fd0);
	ft_putstr_fd(str0, fd0);


	ft_putchar_fd('\n', fd0);
	ft_putchar_fd('\n', fd0);
*/
	//ft_atoi
	char *str1;

	str1 = "      \t  -2147483648hbr11112222";
	ft_putstr_fd("  ft_atoi of '", fd0);
	ft_putstr_fd(str1, fd0);
	ft_putstr_fd("' shows = ", fd0);
	ft_putnbr_fd(ft_atoi(str1), fd0);

	ft_putchar_fd('\n', fd0);

	ft_putstr_fd("real atoi of '", fd0);
	ft_putstr_fd(str1, fd0);
	ft_putstr_fd("' shows = ", fd0);
	ft_putnbr_fd(atoi(str1), fd0);


	ft_putchar_fd('\n', fd0);
	ft_putchar_fd('\n', fd0);

	//ft_itoa
/*	int n1;

	n1 = -2147483648;
	ft_putstr_fd("ft_itoa of ", fd0);
	ft_putnbr_fd(n1, fd0);
	ft_putstr_fd(" shows = '", fd0);
	ft_putstr_fd(ft_itoa(n1), fd0);
	
	
	ft_putstr_fd("'\n", fd0);
	ft_putchar_fd('\n', fd0);
*/
	
	//ft_split
/*#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
        char **tab;
        char c;
        int i;

        c = ' ';
        i = 0;
        if (ac == 2)
        {
                tab = ft_split(av[1], c);
                while (tab[i])
                        printf("%s\n", tab[i++]);
        }
        return (0);
}*/


	//ft_strncmp
	size_t n;

	char s11[50] = "ABCD";
	char s21[50] = "B";
	n = 10;
	printf("n = %ld ft_strncmp of %s and %s shows = %d\n", n, s11, s21, ft_strncmp(s11, s21, n));
	printf("n = %ld strncmp of %s and %s shows = %d\n", n, s11, s21, strncmp(s11, s21, n));

	ft_putchar_fd('\n', fd0);
	ft_putchar_fd('\n', fd0);


	//ft_strlcpy
	size_t size;

	char s12[50] = "";
	const char s22[50] = "1234567";
	char s13[50] = "";
	const char s23[50] = "1234567";
	size = 3;
	printf("ft_strlcpy of %s and %s with size %ld shows =", s12, s22, size);
	printf(" %ld and dest = %s\n", ft_strlcpy(s12, s22, size), s12);
	printf("   strlcpy of %s and %s with size %ld shows =", s13, s23, size);
	printf(" %ld and dest = %s\n", strlcpy(s13, s23, size), s13);
}
