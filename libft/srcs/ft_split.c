/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:24:31 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/04 11:54:33 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	cnt_str(char const *s, char delimiter)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && (s[i] == delimiter))
			i++;
		if (s[i] != '\0')
			cnt++;
		while (s[i] != '\0' && !(s[i] == delimiter))
			i++;
	}
	return (cnt);
}

static char	*get_splitted_str(char const *s, char delimiter)
{
	size_t	i;
	char	*str;
	size_t	len;

	i = 0;
	len = 0;
	while (!(s[len] == delimiter))
		len++;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	strs_i;
	size_t	cnt;

	if (s == NULL)
		return (NULL);
	i = 0;
	strs_i = 0;
	cnt = cnt_str(s, c);
	strs = (char **)ft_calloc(cnt + 1, sizeof(char *));
	if (strs == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && (s[i] == c))
			i++;
		if (s[i] != '\0')
		{
			strs[strs_i] = get_splitted_str(&s[i], c);
			strs_i++;
		}
		while (s[i] != '\0' && !(s[i] == c))
			i++;
	}
	strs[strs_i] = NULL;
	return (strs);
}

// #include <stdio.h>

// int main()
// {
//     char *s = "      split       this for   me  !       ";
// 	char **result = ft_split(s, ' ');
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%s\n", result[i]);
//     }
// }