/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 00:58:37 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/29 01:15:40 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp; 

	temp = *a;
	*a = *b;
	*b = temp;

	printf("a is now equal to %d\nb is now eaual to %d",*a,*b);
}

int main() 
{
	int a = 123;
	int b = 456;
	ft_swap(&a, &b);
	return (0);
}
