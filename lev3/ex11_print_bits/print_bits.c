/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 20:39:33 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/31 20:50:51 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void print_bits(unsigned char octet)
{
	int num;
	int count;

	count = 8;
	while (count != 0)
	{
		num = octet & 128;
		if (num == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
		octet = octet * 2;
		count--;
	}
}
