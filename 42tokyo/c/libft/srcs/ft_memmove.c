/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:23:29 by kentakato         #+#    #+#             */
/*   Updated: 2024/04/27 10:11:27 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
	i = 0;

    if (dst == NULL && src == NULL)
        return NULL;
    
    while (i < len)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];   
        i++;
    }
    return dst;
}