/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:17:05 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/19 18:48:10 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	const char *s = "libft-test-tokyo";
// 	printf("ft : %s, lib : %s\n", ft_strchr(s, 'l' + 256), strchr(s, 'l' + 256));
// 	printf("ft : %s, lib : %s\n", ft_strchr(s, 'i' + 256), strchr(s, 'i' + 256));
// 	printf("ft : %s, lib : %s\n", ft_strchr(s, 'l' - 256), strchr(s, 'l' - 256));
// 	printf("ft : %s, lib : %s\n", ft_strchr(s, 'i' - 256), strchr(s, 'i' - 256));
// }