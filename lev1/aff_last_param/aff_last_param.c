/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 23:09:46 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/28 23:21:10 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		write(1, "\n", 1);
	}
	if(argc > 1)
	{
		ft_putstr(argv[argc -1]);
	}
	return (0);
}
