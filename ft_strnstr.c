/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:41:13 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 19:33:27 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (!haystack[0])
		return (0);
	while (haystack[j] && j < len)
	{
		i = 0;
		while (needle[i] && needle[i] == haystack[j + i] && (j + i) < len)
			i++;
		if (!needle[i])
			return ((char *)&haystack[j]);
		j++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char * a = "Bonjourcoment";
	char * b = strnstr(a, "zzz", 4);
	char * c = ft_strnstr(a,"zzz", 4);
	printf("%s \n", b);
	printf("%s", c);
}*/
