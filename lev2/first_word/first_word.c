/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 17:31:22 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 20:54:37 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

int main(int argc, char *argv[])
{
	int i = 0; 
	if(argc == 2)
	{
		while(argv[1][i] == '\0' || argv[1][i] == ' ')
		{
			i++;
		}
		while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
				ft_putchar(argv[1][i]);
				i++;
		}
	}
	ft_putchar('\n');
	return(0);
}			
		
