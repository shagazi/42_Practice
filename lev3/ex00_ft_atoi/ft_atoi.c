/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 21:05:32 by shagazi           #+#    #+#             */
/*   Updated: 2017/08/31 16:19:32 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char *str)
{
	//Step 1: Declare 3 int variables
	//1) int i = index for argument str; 
	//2) int is_neg = to set a negative sign if string passes negative sign; 
	//3) int number = records number in string to this variable as an integer;
	
	int i;
	int is_neg;
	int number;

	i = 0;
	is_neg = 0;
	number = 0;

	//Step 2: Check for white space, using:
	//1) (space = ' ')
	//2) (tabs = '\t')
	//3) (newline = '\n')
	//THE FOLLOWING ARE NOT NECESSARY, BUT GOOD TO KNOW!
	//4) (vertical tab = '\v')
	//5) (page break = '\f')
	//6) (carriage return = '\r')
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		     || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;

	//step 3a: Checks for negative sign then sets variable (is_neg) to 1;
	//You can also set (is_neg) to a -1 and then multiply it by the number later on, and itterate over the negative sign in the string.	
	if (str[i] == 45)
		is_neg = 1;

	//step 3b: Checks for a positive or a negative value and itterates. 
	if ((str[i] == 45) || (str[i] == 43))
		i++;

	//step 4: Checks for any number between 0 and 9
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		//Multiplies the number in the string by 10. (The first time it happens it multiplies by 0, which produces 0, just to hold a place value.)
		number *= 10;

		//Adds the previous value to the next integer in the string and removes 0.
	   	number += (str[i] - 48);
	   	i++;
	}

	//Step 5: Checks to see if (is_neg) is true then it returns the number with a negative sign infront of it. 
	if (is_neg)
	{
		return (-number);
	}

	//Step 6: Otherwise it prints the number that was recorded. 
	else
	{
		return (number);
	}
}


int main()
{
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("123123"));
	printf("%d\n", ft_atoi(" -+1231sgasd232"));
	printf("%d\n", atoi("  -+1231sgasd232"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483648"));
	return (0);
}
