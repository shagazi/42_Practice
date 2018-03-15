/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 16:14:55 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/25 16:33:15 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{	
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i; 
	i= 0 ;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc > 1)
		ft_putstr(argv[1]);
	if(argc < 1)
		ft_putchar('\n');
}
