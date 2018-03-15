/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 01:58:51 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 14:03:57 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c);

int ft_strlen(char *str)
{
	int len; 

	len = 0; 
	while(str[len] != '\0')
	{
		len++; 
	}
	return(len);
}

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		int len = ft_strlen(argv[1]) - 1;
		while(len >= 0)
		{
			ft_putchar(argv[1][len]);
			len--;
		}
	}
	if(argc != 1)
		ft_putchar('\n');
	return (0);
}
