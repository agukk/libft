/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:40:58 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/10 21:12:57 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/* 部分文字列 needle が検索された len 文字より少ない文字列 haystack の中で最初に現れる位置を見つける
 * ◾️ 引数
 * #1．検索対象のメモリブロック
 * #2．検索文字列
 * #3．検索バイト数
 * ◾️ 返り値
 * ・一致した文字へのポインター（文字列が見つかった場合）
 * ・NULL（文字列が見つからない場合）
 * ◾️ point
 * ・needle_lenよりもlenの方が小さいなら絶対に文字が一致することはないから、そこから条件を考える
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (haystack == NULL && len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && needle_len <= len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
