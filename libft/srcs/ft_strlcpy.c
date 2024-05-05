/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:37:44 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/05 10:24:35 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t src_len = ft_strlen(src);
    if (dstsize == 0)
        return src_len;
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    
    return src_len;
}
