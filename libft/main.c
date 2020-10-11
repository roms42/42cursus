/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 13:31:24 by roms              #+#    #+#             */
/*   Updated: 2020/10/11 17:06:42 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//includes:

#include "libft.h"

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
	int n1;

	n1 = -2147483648;
	ft_putstr_fd("ft_itoa of ", fd0);
	ft_putnbr_fd(n1, fd0);
	ft_putstr_fd(" shows = '", fd0);
	ft_putstr_fd(ft_itoa(n1), fd0);
	
	
	ft_putstr_fd("'\n", fd0);
	ft_putchar_fd('\n', fd0);

}
