/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 22:39:48 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/30 17:26:49 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function checks to see if (char c) is equal to the character in the (str))
int   checkchar(char *str, char c, int len)
{
	int  i;

	i = 0;
	//Checks to see if str[i] is not equal to '\0', AND if the index of the string is less than the length that was passed as the argument, OR if the length is equal to -1)
	while (str[i] && (i < len || len == -1))
	{
	//Checks to see if the index of the string is equal to the character that is passed
		if (str[i] == c)
		    //If it checks out return 1
			return (1);
		i++;
	}
	return (0);
}

int 	main(int ac, char **av)
{
	int  i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])//Checks to see if its not "\0"
	    {
			//First Statement: Checks to see if the character is already a part of the string; If it is it will return 1. 
			//Second Statement: Checks to see if the character in av(1) is also a character in av(2); If it is it will return 1.  
			//(!) means statement is equal to zero. (!statement) same as (statement == 0)
			if (checkchar(av[1], av[1][i], i) == 0 && checkchar(av[2], av[1][i], -1))
			  
				//writes the character.  
				write(1, av[1] + i, 1);
		    i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
