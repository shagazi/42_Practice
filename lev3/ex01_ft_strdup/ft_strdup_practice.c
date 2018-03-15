/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_practice.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:07:57 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/31 19:10:13 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i; 

	i = 0; 
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int ft_strlen(char *str)
{
	int len = 0;

	while(str[len] != '\0')
	{
		len++;
	}
	return(len);
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


char *ft_strdup(char *src)
{
	char *s1;

	s1 = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(s1, src);
	return(s1);
}

int main()
{
	if(ft_strcmp(ft_strdup("aaa"), "aaa") == 0)
		printf("%s\n", "Test passed");
	else
		printf("%s\n", "Try again!");
	return (0);
}
