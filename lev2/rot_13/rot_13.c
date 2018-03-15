/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 16:14:23 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 17:29:35 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc != 2 || argv[1][i] == 0)
	{
		ft_putchar('\n');
		return(0);
	}
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'm')
			argv[1][i] = argv[1][i] + 13;
		else if(argv[1][i] >= 'n' && argv[1][i] <= 'z')
			argv[1][i] = argv[1][i] - 13;
		else if(argv[1][i] >= 'A' && argv[1][i] <= 'M')
			argv[1][i] = argv[1][i] + 13;
		else if(argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			argv[1][i] = argv[1][i] - 13;
		i++;
	}
	ft_putstr(argv[1]);
	ft_putchar('\n');
	return(0);
}
