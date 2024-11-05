/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:35:50 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 20:37:11 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*c;

	c = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (c == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		c[i] = s2[j];
		i++;
		j++;
	}
	c[i] = '\0';
	return (c);
}
/*
#include <stdio.h>
int main()
{
	char *a = "Bnj";
	char *b = "Ca";
	char *c = ft_strjoin(a,b);
	printf("%s", c);
}*/
