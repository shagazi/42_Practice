/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 12:43:21 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/18 13:20:02 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i; 
	int j;

	i = 0;
	j = 0;
	if(argc != 1)
		write(1, "z\n", 1);
	while(argv[i][j] != '\0')
	{
		j++;
		if(argv[i][j] == 'z')
		write(1, "z\n", 1);
	}
	return (0);
}
