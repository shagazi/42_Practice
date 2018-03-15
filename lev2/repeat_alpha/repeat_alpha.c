/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 01:16:35 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 01:57:26 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

int main(int argc, char *argv[])
{
	int i; 
	int j; 

	i = 0;
	if(argc > 1)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 97;
				while(j >= 0)
				{
					ft_putchar(argv[1][i]);
					j--;
				}
			}
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 65;
				while(j >= 0)
				{
					ft_putchar(argv[1][i]);
					j--;
				}
			}
			i++;
		}
	}
	if(argc != 1)
		write(1, "\n", 1);
	return(0);
}
	
	
