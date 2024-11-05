/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:43:15 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 21:28:09 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc(sizeof(char) * size * count);
	if (p == NULL)
		return (NULL);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
/*
#include <stdio.h>
int main ()
{ 
	int i = 0;
	char  * c = ft_calloc(10,8);
	while (i < 50){
	printf("%c \n" , c[i]);
	i++;
	}
}*/
