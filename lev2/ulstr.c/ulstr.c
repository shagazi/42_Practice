/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 15:36:39 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 15:58:05 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	int i; 

	i = 0;
	if(argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}

	while(argv[1][i] != '\0')
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			argv[1][i] = argv[1][i] - 32;
			i++;
		}
		if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{	
			argv[1][i] = argv[1][i] + 32;
			i++;
		}
		else
			i++;
	}
	ft_putstr(argv[1]);
	return (0);
}
