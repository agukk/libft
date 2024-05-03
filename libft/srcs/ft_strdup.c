/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:11:35 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/03 13:26:12 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	dstsize;

	dstsize = ft_strlen(s1) + 1;
	dst = (char *)malloc(sizeof(char) * dstsize);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, dstsize);
	return (dst);
}
