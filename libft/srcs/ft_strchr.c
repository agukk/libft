/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:17:05 by kentakato         #+#    #+#             */
/*   Updated: 2024/04/28 12:56:13 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strchr(const char *s, int c)
{
    char *str;
    str = (char *)s;
    while(*str != '\0')
    {
        if (*str == c)
            return str;
        str++;
    }
    if (*str == c)
        return str;
    return NULL;
}