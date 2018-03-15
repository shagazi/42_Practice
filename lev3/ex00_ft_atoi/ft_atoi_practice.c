/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_practice.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:19:43 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/31 18:02:57 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i;
	int is_neg;
	int number;

	i = 0;
	is_neg = 1; 
	number = 0; 

		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if(str[i] == 45)
			is_neg = -1;
		if((str[i] == 45) || (str[i] == 43))
			i++;
		while(str[i] >= 48 && str[i] <= 57)
		{
			number *= 10;
			number += (str[i] - 48);
			i++;
		}
		return(number * is_neg);
}

int main()
{
	printf("%d\n", ft_atoi("  -+23423"));
	printf("%d\n", atoi("  -+23423"));
	printf("%d\n", ft_atoi(" 2147483647"));
	printf("%d\n", atoi(" 2147483647"));
	printf("%d\n", ft_atoi(" 21474khg83647"));
	printf("%d\n", atoi(" 21474khg83647"));
	return (0);
}
