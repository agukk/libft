/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:23:29 by kentakato         #+#    #+#             */
/*   Updated: 2024/04/27 12:33:10 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    
    size_t i;
	i = 0;

    if (dst == NULL && src == NULL)
        return NULL;
    
    if (s < d)
    {
        // --lenの場合は、lenの値を1つ引いて評価 
        while (len--) // 評価してから、lenの値を1つ引く
            d[len] = s[len];   
    }
    else
    {
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    return dst;
}


// int main(void)
// {
//         char str[] = "abcdefgh";
        
        
//         printf("%p\n", ft_memmove(str+2, str, 4));

//         return 0;
// }