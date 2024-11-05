/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:34:58 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/25 23:55:17 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char )c;
	while (s[i])
	{
		if (a == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (a == s[i])
		return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char * s = "Bonjour camiamidon";
	char * t = ft_strchr(s,'\0');
	printf("%s", t);
}*/
