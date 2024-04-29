/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:18:04 by kentakato         #+#    #+#             */
/*   Updated: 2024/04/28 19:40:12 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i = 0;
    
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    while(i < n)
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i]; 
        i++;
    }
    return 0;
}