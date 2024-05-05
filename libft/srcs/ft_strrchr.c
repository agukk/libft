/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:56:52 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/05 10:24:48 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/* 文字列 s 中に最後に文字 c が現れた位置へのポインターを返す
 *
 * ◾️返り値
 * ・一致した文字へのポインター（文字が見つかった場合）
 * ・NULL（文字が見つからない場合）
 * ・文字列終了コードの'\0'も文字列の一部と見なす
 */

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	s_len;

	s_len = ft_strlen(s);
	str = (char *)s;
	if (str[s_len] == c)
		return (&str[s_len]);
	while (s_len--)
	{
		if (str[s_len] == c)
			return (&str[s_len]);
	}
	return (NULL);
}
