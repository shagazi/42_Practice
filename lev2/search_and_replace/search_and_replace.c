/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 14:04:48 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 15:33:07 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc != 4)
	{	
		ft_putchar('\n');
		return(0);
	}
	i = 2;
	while(i < 4) 
	{
		if(!(argv[i][0] != 0 && argv[i][1] == '\0'))
		{
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	i = 0; 
	while(argv[1][i] != '\0')
	{		
		if(argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		i++;
	}
	ft_putstr(argv[1]);
	return (0);
}
