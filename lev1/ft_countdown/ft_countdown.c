/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 22:22:13 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/28 23:03:08 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_countdown()
{
	int i; 

	i = 9; 
	while(i >= 0)
	{
		ft_putchar(i + '0');
		i--;
	}
}

int main()
{
	ft_countdown();
	return (0);
}

//shortcut
/*int main()
{
	write(1, "9876543210\n", 11);
	return (0);
}*/

