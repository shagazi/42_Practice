/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 22:35:42 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/31 19:10:37 by shagazi          ###   ########.fr       */
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

	i = 0; 
	while(str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return(len);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strcmp(char *s1, char *s2)
{
	 int i = 0;
	  while((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
		   {
			     s2++;
				   s1++;
				    }
	   return(s2[i] - s1[i]);
}
