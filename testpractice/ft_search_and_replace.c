/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:43:04 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/18 17:07:09 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int main(int argc, char *argv[])
{
	int i;
	char *s;

	s = argv[1];
	i = 0;
	if(argc == 4)
	{
		if(argv[1][i] != '\0')
			{
				while(argv[1][i] != '\0')
				{		
					if(argv[1][i] == argv[2][0])
					{
						argv[1][i] = argv[3][0];
					}
					i++;
				}	
			ft_putstr(argv[1]);	
			}
	}
	else if(argc != 4)
		write(1, "\n", 1);
	return (0);
}


