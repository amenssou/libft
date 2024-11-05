/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:23:57 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 19:31:04 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_cpy(char *substr, char const *s, size_t len, unsigned int start)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
	{
		substr = malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc (sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	substr = ft_cpy(substr, s, len, start);
	return (substr);
}
/*
#include <stdio.h>
int main ()
{
	char *s = ft_substr("Bonjour petit con" , 4, 7);
	printf("%s" , s);
}*/
