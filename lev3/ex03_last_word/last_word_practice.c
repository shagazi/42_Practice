/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word_practice.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 19:44:39 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/31 19:51:49 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

int main(int ac, char *av[])
{
	int counter = 0;

	if(ac != 2 || av[1][1] == '\0')
		ft_putchar('\n');
	while(*av[1] != '\0')
	{
