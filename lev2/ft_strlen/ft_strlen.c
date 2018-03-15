/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 00:44:11 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 00:57:17 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

////DO NOT USE PRINTF!!!!!///

int ft_strlen(char *str)
{
	int i; 

	i = 0; 
	while(str[i] != '\0')
	{
		i++; 
	}
	return (i);
}

int main()
{
	printf("%d",ft_strlen("string"));
	return(0);
}
