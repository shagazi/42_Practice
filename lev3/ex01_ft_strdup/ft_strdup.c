/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 21:39:16 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/30 16:14:38 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);
int ft_strlen(char *str);

char *ft_strdup(char *src)
{
	//step 1 : Create a pointer to pass the memory allocation too.
	
	char *s1;
	
	//step 2 : Allocate the memory of the length of the argument by using
	//string length, make sure to add 1 to the length to account for null. 

	s1 = malloc(sizeof(char) * (ft_strlen(src) + 1));
	
	//step 3 : Use strcpy to copy the argument to the pointer you created.
	
	ft_strcpy(s1, src);
	
	//step 4 : Return the pointer
	
	return(s1);
}

int main(void)
{
	 assert(strcmp(ft_strdup("aaa"), "aaa") == 0);
	  assert(strcmp(ft_strdup(""), "") == 0);
	   printf("%s\n", "all tests passed!");
	    return (0); 
}


