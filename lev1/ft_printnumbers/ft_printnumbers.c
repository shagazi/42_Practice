/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 22:30:05 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/28 23:03:04 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);


void	ft_print_numbers(void)
{
	int i; 
	
	i = 0;
	while(i <= 9) 
	{
		ft_putchar(i + '0');
		i++;
	}
}

int main()
{
	ft_print_numbers();
	return (0);
}

//shortcut
/*int main()
{
	write(1, "0123456789\n", 1);
	return (0);
}*/
