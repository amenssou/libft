/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:20:02 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/22 19:34:11 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p1[i] > p2[i] || p1[i] < p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
int main ()
{
	char a [] = "Bonzour";
	char b [] = "Bonjour";
	printf("%d \n%d", memcmp(a,b,5), ft_memcmp(a,b,5) );
}*/
