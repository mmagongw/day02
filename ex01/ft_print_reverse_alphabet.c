/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:23:13 by mmagongw          #+#    #+#             */
/*   Updated: 2020/06/21 13:10:38 by mmagongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);


void ft_print_reverse_alphabet(void)
{
	char ch;
	ch = 'z';
	while (ch >= 'a')
	{
ft_putchar(ch);
ch--;
	}
}



