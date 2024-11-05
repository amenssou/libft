/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:50:17 by amenssou          #+#    #+#             */
/*   Updated: 2024/11/05 20:54:43 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;
	size_t	l;

	l = 0;
	i = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	l = len_d;
	if (len_d >= dstsize)
		return (dstsize + len_s);
	while (src[i] && l < dstsize - 1)
	{
		dst[l] = src[i];
		i++;
		l++;
	}
	dst[l] = '\0';
	return (len_s + len_d);
}
/*
#include <stdio.h>
int main ()
{
	char dst[30] = "lorem";
	char dst2[30] = "lorem";
	size_t ok = ft_strlcat(dst, "d567f", 10);
	size_t oki = strlcat(dst2, "d567f", 10);
	printf("%s \n",dst);
	printf("%zu %zu \n", ok, oki);
	strlcat(dst, "lorem ipsum dolor sit amet", 15);
	printf("%s \n",dst2);	
}*/
