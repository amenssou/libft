/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:03:07 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/24 16:00:29 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n && s1[i]) || (i < n && s2[i]))
	{
		if (s1[i] > s2[i] || s2[i] > s1[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	const char * a = "test\200";
	const char * b = "test\0";
	printf ("%d \n", strncmp(a,b,6));
	printf("%d" , ft_strncmp(a,b,6));
}*/
