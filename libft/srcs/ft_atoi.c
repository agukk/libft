/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:40:15 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/03 10:03:09 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
		i = i * 10 + *str++ - '0';
	return (i * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <string.h>

// int main()
// {
//     printf("%lu\n", strlen("9223372036854775808"));
//     printf("lib : atoi %d\n", atoi("18446744073709551616"));
//     printf("ft : %d\n", ft_atoi("18446744073709551616"));
// }