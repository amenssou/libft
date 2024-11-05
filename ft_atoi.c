/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:16:29 by amenssou          #+#    #+#             */
/*   Updated: 2024/11/03 23:53:14 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	chartonb(const char *str, int i, int signe)
{
	unsigned long long int	nb;

	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		if (nb > 9223372036854775807 && signe == -1)
			return (0);
		else if (nb > 9223372036854775807)
			return (-1);
		i++;
	}
	return (nb * signe);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						signe;
	unsigned long long int	nb;

	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	if (str[i] < '0' && str[i] > '9')
		return (0);
	nb = chartonb(str, i, signe);
	return (nb);
}
/*
#include <stdio.h>
int main ()
{
	printf ("%d \n",ft_atoi("9223372036854775808"));	
	printf ("%d \n",atoi("9223372036854775808"));	
}*/
