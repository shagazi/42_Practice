/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec_numb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 11:55:05 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/18 12:03:09 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_dec_numb()
{
	char c;

	c = '9'; 
	while(c >= '0')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_dec_numb();
	return(0);
}
