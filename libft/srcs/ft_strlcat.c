/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 09:37:38 by kentakato         #+#    #+#             */
/*   Updated: 2024/04/28 11:14:39 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);

    if (dst == NULL && dstsize == 0)
        return src_len;   

    if (dstsize <= dst_len)
        return src_len + dstsize;

    while (src[i] != '\0' && i < dstsize - dst_len - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return dst_len + src_len;
}
