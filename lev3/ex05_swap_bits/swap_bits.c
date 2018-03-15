/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 19:33:40 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/31 20:17:25 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char ft_swap_bits(unsigned char octet)
{
	return ((octet >> 4) + (octet << 4));
}

int main()
{
	unsigned char bitch = 165;
	printf("%d",ft_swap_bits(bitch));
	return(0);
}

